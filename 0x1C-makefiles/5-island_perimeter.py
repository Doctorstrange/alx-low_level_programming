#!/usr/bin/python3
"""function def island_perimeter(grid): that returns the
perimeter of the island described in grid"""


def island_perimeter(grid):
    """function def island_perimeter(grid): that returns the
    perimeter of the island described in grid
    Returns: perimeter of island
    """
    length = len(grid[0])
    breath = len(grid)
    perimeter = 0

    for y in range(breath):
        for x in range(length):
            if grid[y][x] == 1:
                perimeter += 4
                if y == 0:
                    if grid[y][x - 1] == 1:
                        perimeter -= 1
                    if grid[y][x + 1] == 1:
                        perimeter -= 1
                if y == len(grid):
                    if grid[y][x - 1] == 1:
                        perimeter -= 1
                    if grid[y][x + 1] == 1:
                        perimeter -= 1
                if y > 0 and x > 0 and y != len(grid):
                    if grid[y][x - 1] == 1:
                        perimeter -= 1
                    if grid[y][x + 1] == 1:
                        perimeter -= 1
                    if grid[y - 1][x] == 1:
                        perimeter -= 1
                    if grid[y + 1][x] == 1:
                        perimeter -= 1
                if y > 0 and y != len(grid) and x == 0:
                    if grid[y][x + 1] == 1:
                        perimeter -= 1
                if y > 0 and y != len(grid) and x == len(grid[0]):
                    if grid[y][x + 1] == 1:
                        perimeter -= 1
    return perimeter

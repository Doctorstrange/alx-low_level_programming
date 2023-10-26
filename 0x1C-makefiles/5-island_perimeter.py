#!/usr/bin/python3
"""function def island_perimeter(grid): that returns the
perimeter of the island described in grid"""


def island_perimeter(grid):
    """function def island_perimeter(grid): that returns the
    perimeter of the island described in grid
    Returns: perimeter of island
    """

    breath = len(grid[0])
    length = len(grid)
    col = 0
    size = 0

    for y in range(length):
        for x in range(breath):
            if grid[y][x] == 1:
                size += 1
                if (x > 0 and grid[y][x - 1] == 1):
                    col += 1
                if (y > 0 and grid[y - 1][x] == 1):
                    col += 1
    return size * 4 - col * 2

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file and print
 * it to the POSIX standard output.
 * @filename: name of the file
 * @letters: - the number of letter in the file to pritn
 * Return: the number of written bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *dplace;
ssize_t readl, writel;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
dplace = malloc(letters * sizeof(char));
if (dplace == NULL)
{
close(fd);
return (0);
}
readl = read(fd, dplace, letters);
if (readl == -1)
{
close(fd);
free(dplace);
return (0);
}
writel = write(1, dplace, readl);
if (writel == -1 || writel != readl)
{
close(fd);
free(dplace);
return (0);
}
close(fd);
free(dplace);
return (writel);
}

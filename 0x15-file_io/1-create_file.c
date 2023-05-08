#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"
/**
 * create_file - function that creates a file;
 * @filename: the name of the file to create
 * @text_content: what should be in the file
 * Return: 1 if successful
*/
int create_file(const char *filename, char *text_content)
{
int fd, wl = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | S_IWUSR | O_TRUNC, S_IRUSR);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[wl] != '\0')
wl++;
if (write(fd, text_content, wl) == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}

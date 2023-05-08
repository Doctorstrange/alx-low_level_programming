#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - function that creates a file;
 * @filename: the name of the file to create
 * @text_content: what should be in the file
 * Return: 1 if successful
*/
int create_file(const char *filename, char *text_content)
{
FILE *file;
if (filename == NULL)
return (-1);

file = fopen(filename, "w");
if (file == NULL)
return (-1);

chmod(filename, S_IRUSR | S_IWUSR);
if (text_content != NULL)
fputs(text_content, file);
fclose(file);
return (1);
}

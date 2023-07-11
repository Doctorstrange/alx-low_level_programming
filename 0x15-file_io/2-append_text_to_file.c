#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: the name of the file to create
 * @text_content: what should be in the file
 * Return: 1 if successful
*/
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
if (filename == NULL)
return (-1);

file = fopen(filename, "a");
if (file == NULL)
return (-1);

if (text_content != NULL)
{
fputs(text_content, file);
}
fclose(file);
return (1);
}

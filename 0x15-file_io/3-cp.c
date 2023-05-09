#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * main - main function
 * @argc: number of argument
 * @argv: index of argument
 * Return: error code
 */
int main(int argc, char *argv[])
{
size_t br, bw;
char dplace[BUFFER_SIZE];

const char *file_to = argv[2];
const char *file_from = argv[1];

struct stat st;

FILE *fp_from;
FILE *fp_to;

if (argc != 3)
{
fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
fp_from = fopen(file_from, "r");
if (fp_from == NULL)
{
fprintf(stderr, "Error: Can't read from file %s\n", file_from);
exit(98);
}

fp_to = fopen(file_to, "w");
if (fp_to == NULL)
{
fprintf(stderr, "Error: Can't write to %s\n", file_to);
exit(99);
}


if (stat(file_to, &st) != 0)
{
if (chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) != 0)
{
fprintf(stderr, "Error: Failed to set permissions for %s\n", file_to);
exit(100);
}
}


while ((br = fread(dplace, 1, sizeof(dplace), fp_from)) > 0)
{
bw = fwrite(dplace, 1, br, fp_to);
if (bw < br)
{
fprintf(stderr, "Error: Can't write to %s\n", file_to);
exit(99);
}
}

if (ferror(fp_from))
{
fprintf(stderr, "Error: Can't read from file %s\n", file_from);
exit(98);
}

if (fclose(fp_from) != 0)
{
fprintf(stderr, "Error: Can't close fd %p\n", (void *)fp_from);
exit(100);
}

if (fclose(fp_to) != 0)
{
fprintf(stderr, "Error: Can't close fd %p\n", (void *)fp_to);
exit(100);
}

return (0);
}

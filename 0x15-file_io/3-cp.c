#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * copy_con - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 */

void copy_con(const char *file_from, const char *file_to)
{
    int fd_from, fd_to, br, bw;
    char buffer[BUFFER_SIZE];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    fd_to = open(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH, O_WRONLY | O_CREAT | O_TRUNC );
    if (fd_to == -1)
    {
        fprintf(stderr, "Error: Can't write to %s\n", file_to);
        exit(99);
    }

    while ((br = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bw = write(fd_to, buffer, br);
        if (bw == -1) {
            fprintf(stderr, "Error: Can't write to %s\n", file_to);
            exit(99);
        }
    }

    if (br == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    if (close(fd_from) == -1)
    {
        fprintf(stderr, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1)
    {
        fprintf(stderr, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    if (chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) == -1)
    {
        fprintf(stderr, "Error: Can't set permissions of the file\n");
        exit(99);
    }

    printf("File successfully copied from %s to %s\n", file_from, file_to);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];
    copy_con(file_from, file_to);

    return 0;
}

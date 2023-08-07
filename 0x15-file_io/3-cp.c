#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int code, const char* format, const char* arg) {
    dprintf(STDERR_FILENO, format, arg);
    exit(code);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error_and_exit(97, "Usage: %s file_from file_to\n", argv[0]);
    }

    const char* file_from = argv[1];
    const char* file_to = argv[2];

    // Open the source file for reading
    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
    }

    // Create or open the destination file for writing, truncate it if it already exists
    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) {
        close(fd_from);
        print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
    }

    // Copy data from source to destination using a buffer
    char buffer[BUFFER_SIZE];
    ssize_t bytesRead, bytesWritten;
    while ((bytesRead = read(fd_from, buffer, sizeof(buffer))) > 0) {
        bytesWritten = write(fd_to, buffer, bytesRead);
        if (bytesWritten == -1) {
            close(fd_from);
            close(fd_to);
            print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
        }
    }

    if (bytesRead == -1) {
        close(fd_from);
        close(fd_to);
        print_error_and_exit(99, "Error: Can't read from file %s\n", file_from);
    }

    // Close file descriptors
    if (close(fd_from) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
    }

    if (close(fd_to) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
    }

    return 0;
}

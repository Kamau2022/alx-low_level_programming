#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<fcntl.h>

/**
*read_textfile - a function that reads a text file and prints
*it to the POSIX standard output
*@filename: the file to read from
*@letters: numbers of letters it should read and print
*Return: 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char buffer[2024];
fd = open("filename", O_RDONLY);
if (filename == NULL)
	return (0);
if (fd == -1)
	return (0);
if (fd != -1)
{
write(fd, filename, sizeof(filename));
lseek(fd, 0, SEEK_SET);
read(fd, buffer, letters);
buffer[letters] = '\0';
close(fd);
}
return (0);
}

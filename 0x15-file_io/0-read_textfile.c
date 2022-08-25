#include <unistd.h>
#include <stdlib.h>
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
int sz, kz;
char *buffer;
if (filename == NULL)
	return (0);
buffer = malloc(letters * sizeof(char));
if (buffer == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
	return (0);
}
sz = read(fd, buffer, letters);
if (sz == -1)
{
return (0);
}
kz = write(STDOUT_FILENO, buffer, sz);
close(fd);
if (kz == -1)
{
return (0);
}
return (kz);
}

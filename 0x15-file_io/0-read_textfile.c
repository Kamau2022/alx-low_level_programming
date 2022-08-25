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
int fd, sz;
char *buffer = (char *) malloc(letters * sizeof(char));
fd = open("filename", O_RDWR);
if (filename == NULL)
	return (0);
if (fd == -1)
	return (0);
if (fd != -1)
{
write(fd, filename, letters);
lseek(fd, 0, SEEK_SET);
sz = read(fd, buffer, letters);
buffer [sz] = '\0';
return (sz);
close(fd);
}
return (0);
}

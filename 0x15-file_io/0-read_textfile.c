#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char buffer[1024];
fd = open("filename", O_RDONLY);
if (filename == NULL)
	return (0);
if (fd == -1)
	return (0);
if (fd != -1)
{
read(fd, buffer, letters);
buffer[letters] = '\0';
close(fd);
}
return (0);
}

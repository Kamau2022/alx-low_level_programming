#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

/**
*create_file - creates a file
*
*@filename: file to be created
*@text_content: string to write to the file
*
*Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
int fd;
int i, sz, kz;
if (filename == NULL)
	return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
	return (-1);
	return (1);
}
if (text_content == NULL)
{
kz = open(filename, O_WRONLY | O_CREAT, 0600);
}
if (kz == -1)
{
	return (-1);
}
else if (kz != -1)
{
return (1);
}
for (i = 0; text_content[i]; i++)
{
sz = write(fd, text_content, i);
close(fd);
}
if (sz == -1)
{
	return (-1);
}
return (1);
}

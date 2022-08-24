#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

/**
*append_text_to_file - appends text at the end of a file
*
*@filename:name of the file
*@text_content: string to add at the end of a file
*
*Return: 1,-1 or 0
*/

int append_text_to_file(const char *filename, const char *text_content)
{
int fd;
int i;

fd = open("filename", O_WRONLY | O_APPEND);
if (filename == NULL || text_content == NULL)
	return (-1);
else
for (i = 0; text_content[i] == '\0'; i++)
{
write(fd, text_content, sizeof(text_content));
lseek(fd, 0, SEEK_SET);
close(fd);
}
return (0);
}

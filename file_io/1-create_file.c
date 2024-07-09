#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the name of the file that is being created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor; /*stores descriptor*/
int writeval; /*stores write result*/
int length; /*stores length of text_content*/

if (filename == NULL) /*if filename == NULL*/
{
return (-1);
} /*create, read + write, truncates if exists, file permissions*/
file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
if (file_descriptor == -1) /*if file_descriptior == NULL*/
{
close(file_descriptor);
return (-1);
}
if (text_content == NULL) /*if text_content == NULL*/
{
close(file_descriptor);
return (-1);
}
while (text_content != '\0') /*while text_content != NULL*/
{
for (length = 0; text_content[length] != '\0'; length++); /*length of text_content*/
writeval = write(file_descriptor, text_content, length);
}
if (writeval == -1)
{
return (-1);
}
close (file_descriptor);
return (1);
}

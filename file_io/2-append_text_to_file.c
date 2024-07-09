#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appensd text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string at the end of the file
 * Return: 1 on success, -1 on failure
 */ 
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor; /*stores descriptor*/
int writeval; /*stores write result*/
int length = 0; /*stores length of text_content*/

if (filename == NULL)
{
return (-1);
} /*read + write only, append*/
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (descriptor == -1)
{
return (-1);
}
if (text_content != NULL)
{
close(file_descriptior);
return(1);
}
if (text_content != NULL)
{
length = strlen(text_content); /*length of text_content*/
writeval = write(file_descriptior, text_content, length);
if (writeval == -1) /*if write operation failed*/
{
return (-1);
}
close(file_descriptior);
return (1); /*success*/
}
}

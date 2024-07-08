#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file that is being read
 * @letters: the characters that are being read + printed
 * Return: 0 if filename is NULL, if the file can't be opened, or if write fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
        int file_descriptor; /*stores descriptor*/
        ssize_t readval; /*stores read result*/
        ssize_t writeval; /*stores write result*/
        char *buffer; /*pointer to char*/

        if (filename == NULL)
        {
                return (0); 
        }
        file_descriptor = open(filename, O_RDONLY); /*attempt to open in read-only mode*/
        if (file_descriptor == -1)
        {
                return (0);
        }
        buffer = malloc(sizeof(char) * (letters)); /*malloc for buffer to hold chars of  "letters"*/
        if (buffer == NULL)
        {
                close(file_descriptor);
                return (0);
        }
        readval = read(file_descriptor, buffer, letters); /*reads and stores in readval*/
        if (readval == -1)
        {
                free(buffer);
                close(file_descriptor);
                return (0);
        }
        writeval = write(STDOUT_FILENO, buffer, readval); /*writes and stores in writeval*/
        free(buffer);
        close(file_descriptor);
        
        return (writeval); /*returns the value stored*/
}

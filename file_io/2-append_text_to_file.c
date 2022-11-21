#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file- main function
 * @filename: source of text
 * @text_content: numbers of characters
 * Return: returns the number of chars printed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openf, writef;

	if (filename == NULL)
		return (-1);
	openf = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (openf == -1)
		return (-1);
	if(text_content == NULL)
		return (1);
	writef = write(openf, text_content, strlen(text_content));
	if (writef == -1)
		return (-1);
	close(openf);
	return (1);
}

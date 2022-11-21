#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * create_file- main function
 * @filename: source of text
 * @text_content: numbers of characters
 * Return: returns the number of chars printed
 */
int create_file(const char *filename, char *text_content)
{
	int writef, createf;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		createf = creat(filename, 0600);
			return (1);
	}
	createf = creat(filename, 0600);
	if (createf == -1)
		return (-1);
	writef = write(createf, text_content, strlen(text_content));
	if (writef == -1)
		return (-1);
	close(createf);
	return (1);
}

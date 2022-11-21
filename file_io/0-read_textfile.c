#include "main.h"
#include <unistd.h>
/**
 * read_textfile - main function
 * @filename: source of text
 * @letters: numbers of characters
 * Return: returns the number of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openf, readf, writef;
	char *txt;

	if (filename == NULL)
		return (0);
	openf = open(filename, O_RDONLY);
	if (openf == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
		return (0);
	readf = read(openf, txt, letters);
	if (readf == -1)
		return (0);
	writef = write(1, txt, letters);
	if (writef == -1)
		return (0);
	close(openf);
	return (readf);
}

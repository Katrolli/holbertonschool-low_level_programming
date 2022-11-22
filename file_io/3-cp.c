#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - main func
 * @argc: par
 * @argv: par
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, cl1, cl2, file_to, file_read, file_write;
	char *buff[1024];
	int tmp_file_from = open(argv[1], O_RDONLY);
	size_t file_from_size = (size_t)lseek(tmp_file_from, 0, SEEK_END);

	close(tmp_file_from);
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1 || tmp_file_from == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((file_read = read(file_from, buff, file_from_size)) > 0)
	{
		file_write = write(file_to, buff, file_from_size);
		if (file_write == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if ((file_read = read(file_from, buff, file_from_size) == -1))
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cl1 = close(file_from);
	cl2 = close(file_to);
	if (cl1 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", cl1);
		exit(100);
	}
	if (cl2 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", cl2);
		exit(100);
	}
	return (0);
}

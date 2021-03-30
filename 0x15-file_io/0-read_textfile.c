#include "holberton.h"

/**
 * read_textfile - reads file then print
 * @filename: filename
 * @letters: num of chars
 * Return: chars writen
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rc, file;
	unsigned int c;
	char *data;

	data = malloc(sizeof(char) * letters);
	if (data == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	rc = read(file, data, letters);
	if (rc < 0)
		return (0);

	if (file < 0)
		return (0);

	c = write(1, data, rc);

	if (c > letters)
	{
		return (0);
	}
	else
	{
		return (c);
	}
}

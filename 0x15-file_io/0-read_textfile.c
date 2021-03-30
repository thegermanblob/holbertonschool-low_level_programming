#include "holberton.h"

/**
 * read_textfile - reads file then print
 * @filename: filename
 * @letters: num of chars
 * Return: chars writen
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rc, file, c;
	char *data;

	data = malloc(sizeof(char) * letters);
	if (data == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	rc = read(file, data, letters);


	c = write(1, data, rc);

	if (file < 0 || rc < 0 || c < 0 || c != rc)
	{
		free(data);
		close(file);
		return (0);
	}
	else
	{
		free(data);
		close(file);
		return (c);
	}
}

#include "holberton.h"

/**
 * _strlen - messure str len
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;
	char c = 'n';

	while (c != '\0')
	{
		c = s[i];
		i++;

	}
	return (i - 1);
}

/**
 * append_text_to_file - creates or truncates file
 * @filename: filename
 * @text_content: content for file
 * Return: 1 on succ -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file, c;

	if (filename == NULL)
	{
		return (-1);
	}



	file = open(filename, O_RDWR | O_APPEND);

	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		c = write(file, text_content, _strlen(text_content));
		if (c != _strlen(text_content))
		{
			close(file);
			return (-1);
		}
	}

		close(file);
		return (1);
	}

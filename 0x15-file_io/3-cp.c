#include "holberton.h"

/**
 * main - cp program
 * @ac: argument count
 * @av:argument list
 * Return: 0 on succ
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	if (av[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	res = cp_file(av[1], av[2]);

	if (res == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	else if (res == -3)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}



	return (0);
}
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
 * cp_file - creates or truncates file
 * @filename: filename
 * @newfile: content for file
 * Return: 1 on succ -1 on fail
 */
int cp_file(const char *filename, const char *newfile)
{
	ssize_t oldfile, nfile, c, cl, rc;
	char data[BUFSIZ];

	if (filename == NULL)
	{
		return (-1);
	}



	oldfile = open(filename, O_WRONLY);
	nfile = open(newfile, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	rc = read(oldfile, data, BUFSIZ);

	if (oldfile < 0)
		return (-2);
	if (nfile < 0)
		return (-3);
	if (rc < 0)
		return (-5);

	if (newfile != NULL)
	{
		c = write(nfile, data, rc);
		if (c != rc)
		{
			close(oldfile);
			return (-1);
		}
	}

	cl = close(oldfile);
	if (cl < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld", oldfile);
		exit(100);
	}
	return (1);
}


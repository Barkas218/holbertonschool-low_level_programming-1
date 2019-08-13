#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - function that creates a file.
 * @filename: Filename
 * @Text_content: Text to add to the file.
 *
 * Return: 1 - Success or -1 - Failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_wrote, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 600);

	if (fd == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	if (len == 0)
		return (0);

	bytes_wrote = write(fd, text_content, len);

		if (len != bytes_wrote || bytes_wrote == -1)
	{
		return (-1);
	}

	return (1);
}

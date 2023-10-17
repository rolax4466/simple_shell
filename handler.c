#include "shell.h"

/**
 * sig_handler - It handles the signal
 *
 * @id: Signal identifier to handle
 *
 * Return: Nothing
 */

void sig_handler(int id)
{
	if (id == SIGINT)
		write(STDOUT_FILENO, "\n($) ", 5);
}

#include "shell.h"

/**
 * _realloc - Resize the memory allocated previously to a pointer
 *
 * @ptr: Previously allocated pointer
 *
 * @old_s: previous old size of the pointer
 *
 * @new_s: New size of the new allocated pointer
 *
 * Return: New pointer memory allocated with new size
 */

void *_realloc(void *ptr, unsigned int old_s, unsigned int new_s)
{
	unsigned int j;
	char *ptrn;

	if (new_s == old_s)
		return (ptr);

	if (ptr == NULL)
	{
		ptrn = malloc(new_s);

		if (ptrn == NULL)
			return (NULL);
		return (ptrn);
	}
	else
	{
		if (new_s == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	ptrn = malloc(new_s);
	if (ptrn == NULL)
		return (NULL);

	for (j = 0; j < old_s && j < new_s; j++)
	{
		ptrn[j] = ((char *) ptr)[j];
	}
	free(ptr);
	return (ptrn);
}

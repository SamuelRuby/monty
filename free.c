#include "monty.h"
#include "lists.h"

/**
 * free_all - custom memory handling function
 * @all: flag to indicate what to free
 */
void free_all(int all)
{
	if (data.line)
	{
		free_everything(data.words);
		data.words = NULL;
		free(data.line);
		data.line =NULL;
	}

	if (all)
	{
		if (data.stack)
		{
			free_dlistint(data.stack);
			data.stack = NULL;
		}
		if (data.fptr)
		{
			fclose(data.fptr);
			data.fptr = NULL;
		}
	}
}

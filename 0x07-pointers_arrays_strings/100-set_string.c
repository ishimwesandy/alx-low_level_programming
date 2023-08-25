#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @str: pointer to pointer
 * @to: pointer char
 */

void set_string(char **str, char *to)
{
	*str = to;
}

#include "main.h"

#include <string.h>

/**puts2 - Prints any other character
 * @str: String to print
 */

void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

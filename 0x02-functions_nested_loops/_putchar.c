#include "main.h"
#include <unistd.h>
/**
 * some text i will edit
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

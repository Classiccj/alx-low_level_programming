#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: number of bytes to allocate
  * Return: Void
   */

void *malloc_checked(unsigned int b)
{
void *spike;
spike = malloc(b);
if (spike == NULL)
{
exit(98);
}
return (spike);
}

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
	
char *
stpcpy (char *dest, const char *src)
{
  while ((*dest++ = *src++) != '\0')
    /* Do nothing. */ ;
  return dest - 1;
}

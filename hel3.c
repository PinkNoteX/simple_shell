#include "main.h"

void *_memset(void *ptr, int value, size_t num)
{
unsigned char* p = ptr;
size_t i;
for (i = 0; i < num; i++)
{
p[i] = (unsigned char)value;
}
return ptr;
}

#include "main.h"

/**
 * handl_buf - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @buf_i: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int handl_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		buf_i = 0;
	}
	buf[buf_] = c;
	ibuf++;
	return (ibuf);
}

#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 * 
 * Return: number of chars printed.
 */

int _printf(const char *format, ...)
{
    unsigned int i = 0, len = 0, buf_i = 0;
    va_list arg;
    int (*function)(va_list, char *, unsigned int);
    char *buffer;

    va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
    if (!format || !buffer || (format[i] == '%' && !format[i + 1])
    {
        return (-1);
    }

    if (!format[i])
    {
        return (0);
    }

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '\0')
            {
                print_buf(buffer, buf_i), free(buffer), va_end(arg);
                return (-1);
            }
            else
            {
                function = print_now_func(format, i + 1);
                if (function == NULL)
                {
                    if (format[i + 1] == ' ' && !format[i + 2])
                    {
                        return (-1);
                    }
                    hand_buffer(buffer, format[i], buf_i), lem ++, i++;
                }
                else
                {
                   len += function(arg, buffer, buf_i);
                   i += ev_print_func(format, i + 1);
                }
            }i++;
        }
        else
        {
            hand_buffer(buffer, format[i], buf_i), len++;
        }
        for (buf_i = len; buf_i > 1024; buf_i -= 1024)
        {
            ;
        }
    }
    print_buf(buffer, buf_i), free(buffer), va_end(arguments);
    return (len);
    
    
}

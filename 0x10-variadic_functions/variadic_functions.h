#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_types - format types
 * @identifier: specify conversation
 * @f: pointer to the function
 */
typedef struct format_types
{
	char *identifier;
	void (*f)(char *seperator, va_list args);

} f_dt;

#endif

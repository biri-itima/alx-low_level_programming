#include "main.h"

/**
 * error_message - error message
 * @code: parameter 1
 * @format: parameter 2
 */
void error_message(int code, const char *format, ...)
{
	va_list args;
	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

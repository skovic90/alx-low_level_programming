#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @..: A variable number of parameters to calculate the sum of.
 *
 * Return:  the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...) {
    if (n == 0) {
        return 0;
    }

    int sum = 0;
    va_list ap; // Declare va_list here
    va_start(ap, n); // Use va_list declared above

    if (unsigned int i = 0; i < n; i++) {
        sum += va_arg(ap, int); // Use ap for va_arg
    }

    va_end(ap);

    return (sum);

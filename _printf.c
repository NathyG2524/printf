#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

int _printf(const char *format, ...)
{
    va_list ap;
    const char *p;
    char *sval;
    int ival;
    double dval;

    va_start(ap, format);

    for(p = format; *p; p++)
    {
        if (*p != '%')
        {
           _putchar (*p);
            continue;
        }
        switch (*++p)
        {
            case 'd':
            ival = va_arg(ap, int);
            _putint(ival );
            break;
            case 'f':
            dval = va_arg(ap, double);
            _putint(dval);
            break;
            case 's':
            for (sval = va_arg(ap, char *); *sval; sval++)
                _putchar(*sval);
            break;
        }
    }
    va_end(ap);
    return 0;
}

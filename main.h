#ifndef _MAIN_H_
#define _MAIN_H_
#define STD_OUT 1
#define NULL ((void *)0)
#include <unistd.h>
#include <stdarg.h>
typedef unsigned long Size_t;
int _printf(const char *format, ...);
void Char(char c);
Size_t String_Size(char *string);
Size_t PrintString(char *s);
Size_t If_Integer(int Number);
#endif

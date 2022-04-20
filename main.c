#include <stdio.h>
#include <ctype.h>

// Alumno: Tao Lizarraga

int main ()
{
    char a;
    while (a=getchar()) // acá me tira un warning por el -Wall, pero el programa funciona correctamente
    {
        if (isupper(a)) a = tolower(a);
        else if (islower(a)) a = toupper(a);
        if (!isdigit(a)) putchar (a);
    }
    return 0;
}
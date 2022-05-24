#include <stdio.h>
#include <ctype.h>
// Alumno: Tao Lizarraga

int main ()
{
    char a;
    while ((a=getchar()) != EOF) 
    {
        if (isupper(a)){
            putchar(tolower(a));
        }
        else if (islower(a)){
            putchar(toupper(a));
        }
        else if (!isdigit(a)){
            putchar (a);
        } 
    }
    return 0;
}
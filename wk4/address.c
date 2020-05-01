#include <stdio.h>
#include <cs50.h>
// #include <string.h>

int main(void)
{

    // typedef char *string;
    // int n = 50;
    // int *p = &n;

    char *s = "Emma";
    printf("%s\n", s);

    //  Prints the address of where s and its contacts are stored in memory
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);

    //  Prints what is at the address
    printf("%c\n", *s);
}

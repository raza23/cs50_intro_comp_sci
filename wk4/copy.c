#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

// #include <stdio.h>

// #include <string.h>

int main(void)
{

    // typedef char *string;
    // int n = 50;
    // int *p = &n;

    string s = get_string("s: ");

    string t = s;

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}

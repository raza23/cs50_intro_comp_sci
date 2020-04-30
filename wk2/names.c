#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// int main(void)
// {
//     string names[2];
//     names[0] = "GON";
//     names[1] = "KILLUA";

//     printf("%s\n", names[0]);
//     // Sting is basically a nested array kind of
//     printf("%c%c\n", names[0][0], names[1][1]);
// }

// int main(void)
// {
//     string s = get_string("Input: ");
//     printf("Output: ");
//     // strlen is from string.h
//     for(int i = 0; i < strlen(s); i++)
//     {
//         printf("%c",s[i]);
//     }
//     printf("\n");
// }

int main(void)
{
    string s = get_string("Input: ");
    printf("Output Uppercase'd: ");
    // strlen is from string.h
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

#include <stdio.h>
#include <cs50.h>
#include <string.h>

// int main(void)
// {
//     int numbers[6] = {1, 3, 5, 2, 4, 6};
//     for (int i = 0; i < 6; i++)
//     {
//         if (numbers[i] == 50)
//         {
//             printf("Found\n");
//         }
//         // else
//         // {
//         // }
//     }
//     printf("no\n");
// }

int main(void)
{
    string names[3] = {"Gon", "Killua", "Kite"};
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], "Gon") == 0)
        {
            printf("Found\n");
            return 0;
        }
        // else
        // {
        // }
    }
    printf("no\n");
    return 1;
}

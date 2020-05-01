#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    // string names[3] = {"Gon", "Killua", "Kite"};
    // string numbers[3] = {"23-4", "432-4", "3232"};
    person people[2];

    people[0].name = "Gon";
    people[0].number = "6737";

    people[1].name = "Killua";
    people[1].number = "232236737";

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, "Gon") == 0)
        {
            printf("%s's number is %s\n", people[i].name, people[i].number);
            return 0;
        }
        // else
        // {
        // }
    }
    printf("no\n");
    return 1;
}

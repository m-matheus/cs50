#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // Print the #
    int y = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - y; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < y; j++)
        {
            printf("#");
        }
        printf("\n");
        y++;
    }
}
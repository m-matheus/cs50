#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // Get input text
    string text = get_string("Text: ");

    // Declaring variables
    int letters = 0;
    int words = 1;
    int sentences = 0;

    // Calculation of letters, words and sentences
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (isspace(text[i]))
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

    // Calculation of L and S
    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;

    // Coleman-Liau Index
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Output for each grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
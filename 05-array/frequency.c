#include <stdio.h>
#include <string.h>

#define COUNT 256

// Requires a character_counts array of size 256 (all possible bytes / chars)
void printAllCharacterCounts(int character_counts[])
{
    int frequency;
    
    // filter out ASCII characters
    for (int i = 32; i < 126; i++)
    {
        frequency = character_counts[i];
        if (frequency != 0)
        {
            printf("%c -> %d\n", (char)i, character_counts[i]);
        }
    }
}

// A simple character frequency analyzer
int main(void)
{

    // int count[256] = {0};
    //for (int i = 0; i < 256; i++) // manually setting all values to 0
    //     count[i] = 0;

    int character_counts[COUNT];
    memset(character_counts, 0, COUNT * sizeof(character_counts[0]));

    int c = 0;
    while ((c = getc(stdin)) != EOF)
    {
        // do something with the character
        character_counts[c]++;
        // complete the code for all letters of the alphabet
    }

    printAllCharacterCounts(character_counts);

    return 0;
}


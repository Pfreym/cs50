#include <cs50.h>
#include <stdio.h>

void print_row(int bricks, int spaces);
// void print_row_rev(int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // Greater than 1, less than or equal to 8
    while (n < 1 || n > 8);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // Print left side
        print_row((n - i) - 1, i + 1);
        // Print centre space
        printf("  ");
        // Print right side
        print_row(i - i, i + 1);
        printf("\n");
    }
}

// Print Row
void print_row(int spaces, int bricks)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}

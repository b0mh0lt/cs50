#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        printf("height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);
    for (int i = 1; i <= height; i++)
    {
        for (int spaces = height - i; spaces > 0; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < i; hashes++)
        {
            printf("#");
        }
        printf("  ");
        for (int hashes = 0; hashes < i; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}

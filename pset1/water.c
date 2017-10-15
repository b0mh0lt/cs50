#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int minutes, bottles;
    printf("minutes: ");
    minutes = get_int();
    bottles = minutes * 12;
    printf("bottles: %i\n", bottles);
}

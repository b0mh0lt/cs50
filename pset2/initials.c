#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string();
    if (name != NULL)
    {
        for (int i = 0, l = strlen(name); i < l; i++)
        {
            if ((i == 0 || name[i - 1] == ' ') && name[i] != ' ')
            {
                printf("%c", toupper(name[i]));
            }
        }
        printf("\n");
    }
}

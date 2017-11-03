#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf("Key must be a non-negative integer.\n");
        return 1;
    }
    printf("plaintext: ");
    string p = get_string();
    if (p != NULL)
    {
        printf("ciphertext: ");
        for (int i = 0, l = strlen(p); i < l; i++)
        {
            if (islower(p[i]))
            {
                printf("%c", (p[i] - 97 + k) % 26 + 97);
            }
            else if (isupper(p[i]))
            {
                printf("%c", (p[i] - 65 + k) % 26 + 65);
            }
            else
            {
                printf("%c", p[i]);
            }
        }
        printf("\n");
        return 0;
    }
}

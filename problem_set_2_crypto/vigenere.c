#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere <keyword>\n");
        return 1;
    }
    string k = argv[1];
    for (int i = 0, l = strlen(k); i < l; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("Keyword must only contain letters A-Z and a-z\n");
            return 1;
        }
    }
    for (int i = 0, l = strlen(k); i < l; i++)
    {
        k[i] = tolower(k[i]);
    }
    printf("plaintext: ");
    string p = get_string();
    if (p != NULL)
    {
        printf("ciphertext: ");
        for (int i = 0, j = 0, l = strlen(p); i < l; i++)
        {
            j = j % strlen(k);
            if (islower(p[i]))
            {
                printf("%c", (p[i] - 97 + k[j] - 97) % 26 + 97);
                j++;
            }
            else if (isupper(p[i]))
            {
                printf("%c", (p[i] - 65 + k[j] - 97) % 26 + 65);
                j++;
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

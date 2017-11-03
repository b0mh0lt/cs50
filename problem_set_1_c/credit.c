#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Number: ");
    long long number = GetLongLong();
    long long firstDigits = number;
    while (firstDigits >= 100)
    {
        firstDigits /= 10;
    }
    int checksum = 0;
    while (number != 0)
    {
        int secondLastDigit = (number / 10) % 10;
        int lastDigit = number % 10;
        if ((secondLastDigit * 2) > 9)
        {
            checksum += ((secondLastDigit * 2) - 9 + lastDigit);
        }
        else
        {
            checksum += ((secondLastDigit * 2) + lastDigit);
        }
        number /= 100;
    }

    if (checksum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if (firstDigits == 34 || firstDigits == 37)
    {
        printf("AMEX\n");
    }
    else if (firstDigits >= 51 && firstDigits <= 55)
    {
        printf("MASTERCARD\n");
    }
    else if (firstDigits / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}

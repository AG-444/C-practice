//binary and hexadecimal

/*Write a c-program to display the binary format of the user entered number if it is
prime else display In hexadecimal format*/
#include <stdio.h>

int prime(int n)
{
    int i, flag = 0;
    if (n == 0 || n == 1)
        flag = 1;
    if (n < 0)
    {
        flag = 2;
        return flag;
    }
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int hex(int n)
{
    int decimalNumber = n;
    printf("%X", decimalNumber);
    return 0;
}
int BINARY(int decimal)
{
    int binary = 0, rem = 0, digit = 1;
    while (decimal != 0)
    {
        rem = decimal % 2;
        decimal = (decimal - rem) / 2;
        binary = binary + (rem * digit);
        digit = digit * 10;
    }
    printf("%d", binary);
    return 0;
}

void main()
{
    int n, result, i = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    result = prime(n);
    do
    {
        switch (result)
        {
        case 0:
            BINARY(n);
            i += 1;
            break;
        case 1:
            hex(n);
            i += 1;
            break;

        default:
            printf("Invalid");
        }
    } while (i == 0);
}

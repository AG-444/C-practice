//Neon number

/*A neon number is a number where the sum of digits of square of the number is equal
to the number. Write a c program to check whether given number is neon numbers or
not.
*/

#include <stdio.h>
int main()
{
    int num, square, digit, sum = 0, i = 0;
    while (i == 0)
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        if (num != 0)
            i += 1;
        else if (num == 0)
            printf("Invalid\n");
    }
    square = num * num;
    while (square != 0)
    {
        digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }

    if (sum == num)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

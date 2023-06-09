/*Write a C-Program to find the Number of ways of selecting words from n-consonats and mvowels when r1-consonants and r2 vowels are chosen.
i.e ncr1 * mcr2
Make sure entered numbers are valid to calculate factorial.*/

#include <stdio.h>

long int fact(int n) 
{
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}

int main()
{
    int n,m,r1,r2,ncr1,mcr2,ways;
    printf("Enter the number of total consonants = ");
    scanf("%d",&n);
    printf("Enter the number of chosen consonants = ");
    scanf("%d",&r1);
    printf("Enter the number of total vowels = ");
    scanf("%d",&m);
    printf("Enter the number of chosen vowels = ");
    scanf("%d",&r2);
    if((n-r1)>=0 && (m-r2)>=0)
    {
        ncr1 = fact(n)/(fact(r1)*fact(n-r1));
        mcr2 = fact(m)/(fact(r2)*fact(m-r2));
        ways = ncr1*mcr2;
        printf("Number of ways of selecting words: %d",ways);
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}

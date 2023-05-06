//Income tax calculator

#include <stdio.h>

int main()
{
    long int income,tax=0;

    printf("Enter the income:");
    scanf("%ld",&income);

    if (income > 150000)
    {
        income = income-150000;
        tax = tax + (income*10/100);
        if(income > 150000)
        {
            income = income-150000;
            tax = tax + (income*10/100);
            if (income > 200000)
            {
                income = income -200000;
                tax = tax + (income*30/100);
            }
        }
    }
    if (tax == 0)
    {
        printf("No Tax");
        return 0;
    }
    else
    {
        printf("%ld",tax);
    }
}

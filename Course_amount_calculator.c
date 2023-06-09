/*An online educational platform offers three courses: Programming Courses, Robotics
Courses and Academic Writing Courses : The vendor gives a discount of 10% on orders
for programming based courses if the order is for more than Rs. 1000.
On orders of more than Rs. 750 for Robotics Courses, a discount of 5% is given, and a
discount of 10% is given on orders for academic writing courses of value more than Rs.
500. Assume that the numeric codes 1,2 and 3 are used for Programming, Robotics and
Academic Writing Courses respectively.
Get the max 5 student registration for each courses Write a program that reads the
product code and the order amount and prints out the net amount that the learner is
required to pay after the discount.*/
#include <stdio.h>

int main()
{
    float code,amount;
    printf("product code: ");
    scanf("%f",&code);
    printf("Order amount: ");
    scanf("%f",&amount);

    if((code == 1) && (amount>1000))
    {
        amount = amount - (10*amount/100);
    }
    else if((code == 2) && (amount >750))
    {
        amount = amount -(amount*5/100);
    }
    else if((code == 3) && (amount >500))
    {
        amount = amount-(amount*10/100);
    }
    else if (amount < 0)
    {
        printf("Invalid input");
        return 0;
    }
    printf("Thanks, your discounted amount: %0.2f",amount);
    return 0;
}

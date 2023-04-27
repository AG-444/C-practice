/*Construct a program to read the numbers until -1 is encountered. 
Find the average of positive numbers and negative numbers entered by user*/

#include<stdio.h>

int main()
{
    float i,pos=0,pos_counter=0,neg=0,neg_counter=0;
    float pos_avg=0,neg_avg=0;
    while(i!=-1)
    {
        printf("Enter the number: ");
        scanf("%f",&i);

        if(i == -1)
        {
            break;
        }
        else if(i>0)
        {
        pos += i;
        pos_counter +=1;
        }

        else if(i<0)
        {
            neg += i;
            neg_counter += 1;
        }
    }
    pos_avg = pos/pos_counter;
    neg_avg = neg/neg_counter;

    if(pos_counter == 0)
    {
        printf("The average of positive number is: 0\n");
        printf("The average of negative number is: %0.2f\n",neg_avg);
        return 0;
    }
    if(neg_counter == 0)
    {
        printf("The average of positive number is: %0.2f\n",pos_avg);
        printf("The average of negative number is: 0\n");
        return 0;
    }
    printf("The average of positive number is: %0.2f\n",pos_avg);
    printf("The average of negative number is: %0.2f\n",neg_avg);
    return 0;
    
}

#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[50];
   char str2[50];  
   int hr1,hr2,amount1=500,amount2=500;

   printf("Enter the worker name: ");  
   scanf("%s",str1);
   printf("Enter the hours of work: ");
   scanf("%d",&hr1);
   printf("Enter the worker name: ");  
   scanf("%s",str2);
   printf("Enter the hours of work: ");
   scanf("%d",&hr2);

   if(hr1<5 || hr1>8)
   {
    printf("%s\n",str1);
    printf("not applicable\n");
   }
   if(hr2<5 || hr2>8)
   {
    printf("%s\n",str2);
    printf("not applicable\n");
   }

   if(hr1>=5)
   {
    if(hr1 == 6)
    {
        amount1 = amount1 + (amount1*10/100);
    }
    else if (hr1 == 7)
    {
        amount1 = amount1 + (amount1*20/100);   
    }
    else if (hr1 == 8)
    {
        amount1 = amount1 + (amount1*30/100);
    }
    printf("Name of first worker: %s\n",str1);
    printf("Received wages of : Rs. %d\n",amount1);
   }

   
   if(hr2>=5)
   {
    if(hr2 == 6)
    {
        amount2 = amount2 + (amount2*10/100);
    }
    else if (hr2 == 7)
    {
        amount2 = amount2 + (amount2*20/100);   
    }
    else if (hr2 == 8)
    {
        amount2 = amount2 + (amount2*30/100);
    }
    printf("Name of second worker: %s\n",str2);
    printf("Received wages of : Rs. %d\n",amount2);
   }
   return 0;
}  

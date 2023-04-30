//Digital Root

/*Write a c-program to determine the digital root of a second largest element in an array
consisting of 6 elements.*/

#include <stdio.h>

int digital_root(int number)
{
    int temp, droot = 0;
    temp = number;
    while (temp != 0)
    {
        int digit = temp % 10;
        droot += digit;
        temp /= 10;
        if (temp == 0 && droot > 9)
        {
            temp = droot;
            droot = 0;
        }
    }
    printf("The digital root of %u is %u\n", number, droot);
    return 0;
}
int sec_max(int arr[6])
{
    int max1, max2;
    max1 =0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == max1)
        {
            continue;
        }
        else if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    return max2;
}

void main()
{
    int arr[6];
    printf("Enter 6 Numbers: \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2]== arr[3] && arr[3]== arr[4] && arr[4]== arr[5])
    {
        printf("All Same");
    }
    else
    {
        digital_root(sec_max(arr));
    }
}

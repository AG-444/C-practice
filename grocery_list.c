//grocery list

/*Write a program to create two grocery storage with minimum five items each. Merge
the storage to new space storage in such a way that first storage may be copied as it is and
reverse only the second array and merge it. Perform sorting in the new array and print it.
Implement the same by passing appropriate arrays to functions. Below is the sample
output.*/

#include <stdio.h>

int main()
{
    int array[100], arr1[100], arr2[100], arr_rev[100], n1, n2, n, c, d,a,i,j;

    printf("Enter number of elements in First tank ");
    scanf("%d", &n1);

    printf("Enter items for First Tank ");
    for (c = 0; c < n1; c++)
        scanf("%d", &arr1[c]);

    printf("Enter number of elements in First tank ");
    scanf("%d", &n2);
    printf("Enter items for Second Tank ");
    for (c = 0; c < n1; c++)
        scanf("%d", &arr2[c]);

    for (int i = 0; i < n2; i++)
    {
        arr_rev[i] = arr2[n2 - i - 1];
    }

    for (int i = 0; i < n1; i++)
    {
        array[i] = arr1[i];
        array[n1 + i] = arr_rev[i];
    }
    printf("Elements after merging ");
    for (c = 0; c < (n1 + n2); c++)
        printf("%d ", array[c]);

    printf("\n");
    n = n1 +n2;
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (array[i] > array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }

    printf("The sorted elements are ");
    for (c = 0; c < n; c++)
        printf("%d ", array[c]);

    return 0;
}

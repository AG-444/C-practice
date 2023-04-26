//All permutations of digits of a number

#include <stdio.h>

void permute(int *, int, int), swap(int *, int, int), printArray(int *, int);

inline void swap(int *arr, int a, int b)
{
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}
void printArray(int *a, int len)
{
    size_t i = 0;
    for (i = 0; i < len; i++)
        printf("%d", a[i]);

    printf("\n");
}
void permute(int *arr, int start, int end)
{
    int i;
    if (start == end)
    {
        printArray(arr, end);
        return;
    }
    permute(arr, start + 1, end);
    for (i = start + 1; i < end; i++)
    {
        if (arr[start] == arr[i])
            continue;
        swap(arr, start, i);
        permute(arr, start + 1, end);
        swap(arr, start, i);
    }
}

int main()
{
    int num,a[100],arr[100], idx = 0, arr_lentgh,count=0;
    printf("Enter number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        int mod = num % 10;
        a[idx] = mod;
        idx++;
        num = num / 10;
    }

    for(int i =1; i<idx;i++)
    {
        if(a[i-1] == a[i])
        {
            count++;
        }
    }
    
    if (count+1 == idx)
    {
        printf("no possible combinations");
        return 0;
    }
    
    
    for(int i =0; i<idx;i++)
    {
        arr[idx-i-1] = a[i];
    }

    permute(arr, 0, idx);
    return 0;
}

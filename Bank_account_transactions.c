//Bank account transactions

#include <stdio.h>

int main()
{
    int balance = 30000, n, value;
    do
    {
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            scanf("%d", &value);
            balance = balance - value;
            if (balance < 0)
            {
                printf("Invalid amount request, chack balance");
            }
            else
            {
                printf("%d\n", balance);
            }
            break;
        case 2:
            scanf("%d",&value);
            balance = balance +value;
            printf("%d\n",balance);
            break;
        case 3:
            printf("%d\n",balance);
        }

    } while (n != 4);

    return 0;
}

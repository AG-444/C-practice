#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int deletechar(char *s, char c, int n)
{
    int i, k = 0;

    for (i = 0; s[i]; i++)
    {
        s[i] = s[i + k];
        if (s[i] == c)
        {
            n++;
            k++;
            i--;
        }
    }
    return n;
}

int main()
{
    char str[100], chr, new[100];
    int n = 0;

    printf("Enter  the string : ");
    gets(str);

    printf("Enter character: ");
    chr = getchar();
    n = deletechar(str, chr, n);
    if (n == 0)
    {
        printf("no match");
    }
    else
    {
        printf("%s", str);
    }
    return 0;
}

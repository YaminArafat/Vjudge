#include <stdio.h>
int main()
{
    int n,i;

    scanf("%d", &n);

    while (n)
    {
        i=i*0+n%10;
        n=n/10;

        printf("%d",i);
    }
    return 0;
}

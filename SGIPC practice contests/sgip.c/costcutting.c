#include <stdio.h>
int main()
{
    int T,i,mid;
    int a,b,c;
    scanf("%d", &T);
    for (i=0; i<T; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if ((a>b && a>c && b<c) || (b>a && b>c && a<c))
        {
            mid=c;
            printf("Case %d: %d\n", i+1,mid);
        }
        if ((c>a && c>b && a<b) || (a>b && a>c && c<b))
        {
            mid=b;
            printf("Case %d: %d\n", i+1,mid);
        }
        if ((b>c && b>a && c<a) || (c>b && c>a && b<a))
        {
            mid=a;
            printf("Case %d: %d\n", i+1,mid);
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    long long int tc,i,n;
    scanf("%lld",&tc);
    for (i=0;i<tc;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",n>>1);
    }
    return 0;
}

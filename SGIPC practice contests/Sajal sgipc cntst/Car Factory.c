#include<stdio.h>

int main()
{
    long long t,n,k,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&k);
        printf("%lld\n",k+n-1);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    long long t,n,m,i,c=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++) {
        scanf("%lld %lld",&n,&m);
        if((n+m)%2==0) printf("abdullah\n");
        else printf("hasan\n");
    }
    return 0;
}

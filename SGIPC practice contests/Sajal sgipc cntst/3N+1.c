#include<stdio.h>

int main()
{
    long long int i,j,n,m,k,count,s;
    while(scanf("%d%d",&n,&m)==2)
    {
        printf("%lld %lld",n,m);
        if(n==0 || m==0)
            break;
        s=0;
        if(n>m)
        {
            k=m;
            m=n;
            n=k;
        }
        for(i=n;i<=m;i++)
        {
            count=1;
            j=i;
            while(j!=1)
            {
                if(j%2==0)
                    j=j/2;
                else
                    j=(j*3)+1;
                count++;
            }
            if(count>=s)
                s=count;
        }
        printf("% lld\n",s);
    }
    return 0;
}

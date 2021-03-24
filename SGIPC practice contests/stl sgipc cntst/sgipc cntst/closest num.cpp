#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i,t,a,b,c,x,temp1,temp2;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld %lld %lld",&a,&b,&x);
        c=powl(a,b);
        if(b==0)
        {
            printf("0\n");
        }
        else if (b<0)
        {
            if(x==1)
                printf("%lld\n",x);
            else
                printf("0\n");
        }
        /*else if (x==c)
        {
            printf("%lld\n",x);
        }*/
        else
        {
            temp1=(c/x)*x;
            temp2=temp1+x;
            if(abs(c-temp1)>abs(c-temp2))
            {
                printf("%lld\n",temp2);
            }
            else
            {
                printf("%lld\n",temp1);
            }
        }
        /*else if (c<x)
        {
            printf("%lld\n",x);
        }*/
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long g,l,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&g,&l);
        if(l%g==0)
        {
            printf("%lld %lld\n",g,l);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
/*x=g;
        f=0;
        for(i=x;i<=l;i+=x)
        {
            for(j=x;j<=l;j+=x)
            {
                if(((i*j)/g)==l)
                {
                    printf("%lld %lld\n",i,j);
                    f=1;
                    break;
                }
            }
            if(f)
            {
                break;
            }
        }*/

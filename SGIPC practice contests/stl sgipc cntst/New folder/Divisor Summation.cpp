#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,sum;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum=0;
        for(i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {

                sum+=i;
                if(i!=1 && i!=(n/i))
                {
                    sum+=(n/i);
                }
                //cout<<i<<endl<<n/i<<endl;
            }
        }
        if(n==1)
        {
            sum--;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

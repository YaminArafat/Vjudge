#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long x,mn=10000000;
        long long ans;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&x);
            if(x<mn)
            {
                mn=x;
            }
        }
        //cout<<mn<<endl;
        ans=mn*(n-1);
        printf("%lld\n",ans);
    }
    return 0;
}

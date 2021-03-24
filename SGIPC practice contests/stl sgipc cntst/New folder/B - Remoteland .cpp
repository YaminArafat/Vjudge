#include <bits/stdc++.h>
using namespace std;
long long bs(long long n)
{
    long long hgh,low,mid,x,ans=0,mx=0;
    long double y;
    for(long long i=n;i>=1;i--)
    {
        hgh=i;
        low=1;
        while(low<hgh)
        {
            mid=(hgh+low)/2;
            if((hgh+low)%2)
            {
                mid++;
            }
            x=mid*i;
            y=sqrt(x);
            x=y;
            cout<<x<<" "<<y<<endl;
            if(x==y)
            {
                low=mid+1;
                ans=mid*i;
                mx=max(mx,ans);
            }
            else
            {
                low=mid+1;
            }
        }
        if(mx)
        {
            break;
        }
    }
    return mx%1000000007;
}
int main()
{
    long long n;
    while(scanf("%lld",&n)==1&&n)
    {
        printf("%lld\n",bs(n));
    }
}

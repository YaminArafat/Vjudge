#include <bits/stdc++.h>
using namespace std;
long long binary_srch(long long a,long long b,long long l)
{
    long long hgh=l,low=1,mid,x,temp=0;
    while(low<hgh)
    {
        mid=(hgh+low)/2;
        if((hgh+low)%2)
        {
            mid++;
        }
        x=(a*b*mid)/__gcd(__gcd(a,b),mid);
        if(x==l)
        {
            temp=x;
            cout<<temp<<endl;
        }
        if(x>=l)
        {
            hgh=mid-1;
        }
        else if(x<l)
        {
            low=mid+1;
        }
    }
    return temp;
}
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    long long t,a,b,l,i=0,x;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld %lld %lld",&a,&b,&l);
        if((l%a)||(l%b))
            printf("Case %lld: impossible\n",++i);
        else
        {
            x=binary_srch(a,b,l);
            if(x)
                printf("Case %lld: %lld\n",++i,x);
            else
                printf("Case %lld: impossible\n",++i);
        }
    }
    return 0;
}

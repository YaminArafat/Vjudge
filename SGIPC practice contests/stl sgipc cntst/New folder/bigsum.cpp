#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long bigSsum(long long a, long long b,long long m)
{
    if(b==0) return 0;
    long long sum;
    if(b%2)
    {
        sum = bigSsum((a%m*a%m)%m,(b-1)/2,m);
        sum = (sum +((a%m)*(sum))%m)%m;
        sum = (1+((a%m)*sum)%m)%m;
    }
    else
    {
        sum = bigSsum((a%m*a%m)%m,b/2,m);
        sum = (sum+((a%m)*(sum))%m)%m;
    }
    return sum%m;
}
/*long long bigsum(long long a,long long b,long long m)
{
    if(b==0)
    {
        return 1;
    }
    if(b%2==0)
    {
        long long x=bigsum(p*p,q/2,m);
        long long ans=((x%1000000007)*(x%1000000007))%1000000007;
        return ans;
    }
    if(b%2!=0)
    {
        return (a*bigmod(a,b-1));
    }
}*/
int main()
{
    long long a,b,m;
    long double x;
    cin>>a>>b>>m;
    x=ceil((a+b)/2);
    cout<<x<<endl;
    //cout<<bigSsum(a,b+1,m)<<endl;
}

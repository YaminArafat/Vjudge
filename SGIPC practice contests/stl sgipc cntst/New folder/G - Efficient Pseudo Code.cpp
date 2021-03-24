#include <bits/stdc++.h>
#define mx 46350
using namespace std;
bool flag[mx+5];
vector<long long>vec;
void seive()
{
    for(int i=3; i*i<=mx; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<=mx; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    vec.push_back(2);
    for(long long i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
        }
    }
}
long long bigsum(long long a, long long b,long long m)
{
    if(b==0) return 0;
    long long sum;
    if(b%2)
    {
        sum = bigsum((a%m*a%m)%m,(b-1)/2,m);
        sum = (sum +((a%m)*(sum))%m)%m;
        sum = (1+((a%m)*sum)%m)%m;
    }
    else
    {
        sum = bigsum((a%m*a%m)%m,b/2,m);
        sum = (sum+((a%m)*(sum))%m)%m;
    }
    return sum%m;
}
long long factorize(long long n,long long m)
{
    if(n==1)
    {
        return 1%1000000007;
    }
    else if (n<=mx && n%2 && !flag[n]&& m==1)
    {
        return (n+1)%1000000007;
    }
    else if(n<=mx && n%2 && !flag[n])
    {
        long long x=bigsum(n,m+1,1000000007);
    }
    long long ans=1;
    for(int i=0; i<vec.size()&&(vec[i]*vec[i]<=n); i++)
    {
        if(n%vec[i]==0)
        {
            long long c=0;
            while(n%vec[i]==0)
            {
                n/=vec[i];
                c+=m;
            }
            ans=((ans%1000000007)*(bigsum(vec[i],c+1,1000000007)%1000000007)%1000000007);
        }
    }
    if(n>1)
    {
        ans=((ans%1000000007)*(bigsum(n,m+1,1000000007)%1000000007)%1000000007);
    }
    return ans%1000000007;
}
int main()
{
    seive();
    long long t,n,m,c=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        printf("Case %lld: %lld\n",++c,factorize(n,m));
    }
    return 0;
}

/*/*long long bigmod(long long p,long long q)
{
    if(q==0)
    {
        return 1;
    }
    if(q%2==0)
    {
        long long x=bigmod(p,q/2);
        long long ans=((x%1000000007)*(x%1000000007))%1000000007;
        return ans;
    }
    if(q%2!=0)
    {
        return ((p%1000000007)*bigmod(p,q-1)%1000000007)%1000000007;
    }
}


if(n==1)
    {
        return 1%1000000007;
    }
    else if (n<=mx && n%2 && !flag[n]&& m==1)
    {
        return (n+1)%1000000007;
    }
    else if(n<=mx && n%2 && !flag[n])
    {
        long long x=(1-((bigmod(n,m)%1000000007)*(n)%1000000007)%1000000007)/(1-n);
        return x%1000000007;
    }
    long long sum=0,ans=1;
    for(int i=0; i<vec.size()&&(vec[i]*vec[i]<=n); i++)
    {
        if(n%vec[i]==0)
        {
            long long c=0;
            sum=0;
            while(n%vec[i]==0)
            {
                n/=vec[i];
                c+=m;
            }
            //cout<<vec[i]<<" "<<c<<" "<<bigmod(vec[i],c)<<endl;
            sum+=(1-(((bigmod(vec[i],c)%1000000007)*(vec[i]%1000000007))%1000000007))/(1-vec[i]);
            //cout<<sum<<endl;
            ans*=sum;
        }
    }
    //cout<<ans<<endl;
    if(n>1)
    {
        sum=0;
        sum+=(1-((bigmod(n,m)%1000000007)*(n)%1000000007)%1000000007)/(1-n);
        ans*=sum;
    }
    return ans%1000000007;
*/

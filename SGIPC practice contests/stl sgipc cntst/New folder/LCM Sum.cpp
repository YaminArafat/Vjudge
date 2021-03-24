#include <bits/stdc++.h>
#define mx 1000005
using namespace std;
long long phi[mx+5];
bool flag[mx+5];
long long ans[mx+5];
void func()
{
    for(long long i=1; i<=mx; i++)
    {
        phi[i]=i;
    }
    for(long long i=2; i<=mx; i++)
    {
        if(!flag[i])
        {
            for(long long j=i; j<=mx; j+=i)
            {
                flag[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
    for(long long i=1; i<=mx; i++)
    {
        for(long long j=i; j<=mx; j+=i)
        {
            ans[j]+=(i*phi[i]);
        }
    }
    /*for(int i=1;i<=mx;i++)
    {
        cout<<i<<" "<<ans[i]<<endl;
    }*/
}
int main()
{
    func();
    long long t,n,x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        x=ans[n]+1;
        x*=n;
        x/=2;
        printf("%lld\n",x);
    }
    return 0;
}
/*
long long lcmsum2(long long n)
{
    long long sum=0;
    for(long long i=1;i<=n;i++)
    {
        sum+=(i*n)/__gcd(i,n);
    }
    return sum;
}


long long arr[mx+5];
void precal()
{
    /*long long n=6;
    long long x,up;
    up=n*n;
    x=n/2;
    long long sum=0;
    if(n%2==0)
    {
        x=(n-1)/2;
        sum+=(((x+1)*n)/__gcd(x+1,n));
    }
    for(long long i=1; i<=x; i++)
    {
        sum+=(up/__gcd(i,n));
    }
    sum+=n;
    arr*/
/*arr[1]=1;
for(long long i=2;i<=mx;i++)
{
    //arr[i]=arr[i-1]+
}
}*/
/*long long lcmsum(long long n)
{
    long long x,up;
    up=n*n;
    x=n/2;
    long long sum=0;
    if(n%2==0)
    {
        x=(n-1)/2;
        sum+=(((x+1)*n)/__gcd(x+1,n));
    }
    for(long long i=1; i<=x; i++)
    {
        sum+=(up/__gcd(i,n));
    }
    sum+=n;
    return sum;
}*/

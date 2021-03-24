#include <bits/stdc++.h>
#define mx 100000009
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
long long factorize(long long n)
{
    if(n==1)
    {
        return 0;
    }
    if(n<=mx && n%2 && !flag[n])
    {
        return 1;
    }
    long long sum=1,ans=1,tmp=n;
    for(int i=0; i<vec.size()&&(vec[i]*vec[i]<=n); i++)
    {
        if(n%vec[i]==0)
        {
            long long c=0;
            sum=1;
            while(n%vec[i]==0)
            {
                n/=vec[i];
                c++;
                sum+=powl(vec[i],c);
            }
            //cout<<sum<<endl;
            ans*=sum;
        }
    }
    if(n>1)
    {
        ans*=n+1;
    }
    return ans-tmp;
}
int main()
{
    seive();
    int t;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",factorize(n));
    }
    return 0;
}

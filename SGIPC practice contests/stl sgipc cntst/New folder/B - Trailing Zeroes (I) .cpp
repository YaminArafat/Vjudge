#include <bits/stdc++.h>
#define mx 1000009
using namespace std;
bool flag[mx+5];
vector<long long>vec;
void seive()
{
    flag[1]=1;
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
long long div_count(long long n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2||n==3)
    {
        return 1;
    }
    long long ans=1;
    for(int i=0;i<vec.size() && (vec[i]*vec[i])<=n; i++)
    {
        long long c=1;
        while(n%vec[i]==0)
        {
            n/=vec[i];
            c++;
        }
        ans*=c;
    }
    if(n>1)
    {
        ans*=2;
    }
    return ans-1;
}
int main()
{
    seive();
    long long t,n,c=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("Case %lld: %lld\n",++c,div_count(n));
    }
    return 0;
}
/*sQrt=sqrt(n);
    //cout<<n<<endl;
    /*if((tmp==n)&&(n%2)&&(n>mx))
    {
        ans*=2;
    }
    else if((mx<n)&&(n%2))
    {
        ans*=2;
    }
    else if((n%2)&&!flag[n])
    {
        ans*=2;
    }
    else if (((sQrt%2)||sQrt==2)&&((sQrt*sQrt)==n)&&(!flag[sQrt]))
    {
        ans*=3;
    }
    else if (n!=1)
    {
        ans*=4;
    }*/

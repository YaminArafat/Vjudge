#include <bits/stdc++.h>
#define mx 1000009
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
long long factorize(long long a,long long b,long long q)
{
    long long ans=1;
    for(int i=0; i<vec.size(); i++)
    {
        long long x=0,c=0,y=0;
        if(a%vec[i]==0)
        {
            while(a%vec[i]==0)
            {
                a/=vec[i];
                x++;
            }
        }
        if(b%vec[i]==0)
        {
            while(b%vec[i]==0)
            {
                b/=vec[i];
                y++;
            }
        }
        if(q%vec[i]==0)
        {
            while(q%vec[i]==0)
            {
                q/=vec[i];
                c++;
            }
            if(c>x && c>y)
            {
                ans*=powl(vec[i],c);
            }
        }
    }
    if(q>1)
    {
        ans*=q;
    }
    return ans;
}
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    seive();
    long long t,a,b,l,i=0;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld %lld %lld",&a,&b,&l);
        if((l%a)||(l%b))
            printf("Case %lld: impossible\n",++i);
        else
            printf("Case %lld: %lld\n",++i,factorize(a,b,l));
    }
    return 0;
}
/*for(int i=0; i<vec.size()&&(vec[i]*vec[i])<=p; i++)
    {
        while(p%vec[i]==0)
        {
            p/=vec[i];
            arr1[vec[i]]++;
        }
    }
    if(p>1)
    {
        arr1[p]++;
    }*/
/*if(arr1[vec[i]]<c)
            {
                ans*=powl(vec[i],c);
            }*/

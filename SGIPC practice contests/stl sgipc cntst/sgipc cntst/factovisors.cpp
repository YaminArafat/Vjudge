#include <bits/stdc++.h>
#define mx 46360
using namespace std;
bool flag[mx+50];
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
bool factorize(long long n,long long m)
{
    if(!m||n>=m)
    {
        return true;
    }
    if(!n && m>1)
    {
        return false;
    }
    if(!n && m==1)
    {
        return true;
    }
    for(int i=0; i<vec.size()&&(vec[i]*vec[i]<=m); i++)
    {
        if(m%vec[i]==0)
        {
            int c=0;
            while(m%vec[i]==0)
            {
                m/=vec[i];
                c++;
            }
            long long f=vec[i],sum=0;
            long long x=n/f;
            while(x!=0)
            {
                sum+=n/f;
                f*=vec[i];
                x=n/f;
            }
            //cout<<vec[i]<<" "<<c<<" "<<sum<<endl;
            if(c>sum)
            {
                return false;
            }
        }
    }
    if(m>1)
    {
        long long f=m,sum=0;
        long long x=n/f;
        while(x!=0)
        {
            sum+=n/f;
            f*=m;
            x=n/f;
        }
        //cout<<m<<" "<<1<<" "<<sum<<endl;
        if(sum<1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    long long n,m;
    seive();
    while (scanf("%lld %lld",&n,&m)==2)
    {
        if(factorize(n,m))
            printf("%lld divides %lld!\n",m,n);
        else
            printf("%lld does not divide %lld!\n",m,n);
    }
    return 0;
}
/*long long temp2=0;
    for(int i=0; i<vec.size() && (vec[i]*vec[i])<=m; i++)
    {
        //long long c=0;
        while(m%vec[i]==0)
        {
            m/=vec[i];
            arr[vec[i]]++;
        }
    }
    if(m>1)
    {
        //arr[m]++;
        temp2=m;
    }
    //cout<<arr[3]<<endl;
    for(long long i=2; i<=mx; i++)
    {
        if(!arr[i])
        {
            continue;
        }
        //cout<<i<<endl;
        long long temp=n,x,sum=0,f=i;
        x=temp/f;
        while(x!=0)
        {
            sum+=temp/f;
            f*=i;
            x=temp/f;
        }
        if(sum<arr[i])
        {
            return false;
        }
    }
    if(temp2)
    {
        long long temp=n,x,sum=0,f=temp2;
        x=temp/f;
        while(x!=0)
        {
            sum+=temp/f;
            f*=temp2;
            x=temp/f;
        }
        if(sum<1)
        {
            return false;
        }
    }
    memset(arr,0,sizeof(arr));
    return true;*/
/*int factoBigMod(long long n,long long m)
{
if (n==0||n==1)
{
    return 1;
}
else
{
    return (((n%m)*(factoBigMod(n-1,m)%m))%m);
}
}*/

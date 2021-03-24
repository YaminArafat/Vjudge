#include <bits/stdc++.h>
#define mx 9999
using namespace std;
bool flag[mx+5];
bool sq[99980001];
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
    flag[1]=1;
    flag[0]=1;
    vec.push_back(2);
    sq[4]=1;
    for(long long i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
            sq[i*i]=1;
        }
    }
}
long long c_div(long long a,long long b,long n)
{
    long long c=0;
    for(long long i=a; i<=b; i++)
    {
        long long ans=1,tmp=i;
        //cout<<i<<endl;
        for(int j=0; j<vec.size()&&((long long)vec[j]*vec[j]*vec[j])<=tmp; j++)
        {
            long long cnt=1;
            while(tmp%vec[j]==0)
            {
                tmp/=vec[j];
                cnt++;
                //cout<<tmp<<" "<<vec[j]<<endl;
            }
            ans*=cnt;
        }
        //cout<<endl;
        //cout<<tmp<<endl;
        if(tmp==2||(tmp%2 && tmp<mx && !flag[tmp]))
        {
            ans*=2;
        }
        else if (tmp<mx*mx && sq[tmp])
        {
            ans*=3;
        }
        else if(tmp!=1)
        {
            ans*=4;
        }
        //cout<<i<<"="<<ans<<endl;
        if(ans==n)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    seive();
    long long a,b,n;
    scanf("%lld %lld %lld",&a,&b,&n);
    if(n==1 && a==1)
    {
        printf("1\n");
    }
    else if(n==1 && a>1)
    {
        printf("0\n");
    }
    else if (b<mx && n==2)
    {
        long long c=0;
        if(a<=2)
        {
            c++;
        }
        for(long long i=a;i<=b;i++)
        {
            if(i%2 && !flag[i])
            {
                c++;
            }
        }
        printf("%lld\n",c);
    }
    else
    printf("%lld\n",c_div(a,b,n));
    return 0;
}

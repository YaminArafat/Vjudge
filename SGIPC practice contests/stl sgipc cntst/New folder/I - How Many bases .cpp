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
long long int Big_mod(long long int b,long long int p,long long int m)
{
    if(p==0)
    {
        return 1;
    }
    if(p%2==0)
    {
        long long int x=Big_mod(b,p/2,m);
        long long int ans=((x%m)*(x%m))%m;
        return ans;
    }
    if(p%2!=0)
    {
        return ((b%m)*Big_mod(b,p-1,m)%m)%m;
    }
}
int factorize(long long n,int t)
{
    int ans=1;
    for(int i=0;i<vec.size()&&(vec[i]*vec[i]<=n);i++)
    {
        if(n%vec[i]==0)
        {
            int cnt=1;
            while(n%vec[i]==0)
            {
                n/=vec[i];
                cnt++;
            }
            ans*=cnt;
            //ans=((ans%100000007)*(cnt%100000007))%100000007;
        }
    }
    if(n>1)
    {
        //ans=((ans%100000007)*(2%100000007))%100000007;
        ans*=2;
    }
    cout<<ans<<endl;
    return ans-t;
}
int main()
{
    seive();
    int n,m,t,c=0;
    while(scanf("%d %d %d",&n,&m,&t)==3 && n &&m &&t)
    {
        long long x=Big_mod(n,m,100000007);
        cout<<x<<endl;
        printf("Case %d: %d\n",++c,factorize(x,t));
    }
    return 0;
}





/*long long bigsum(long long a, long long b,long long m)
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
}*/

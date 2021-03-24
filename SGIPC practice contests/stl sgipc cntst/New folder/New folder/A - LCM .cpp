#include <bits/stdc++.h>
#define mx 1000005
using namespace std;
long long arr[mx+5];
bool flag[mx+5];
//bool sq[1000140625];
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
    //sq[4]=1;
    for(long long i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
            //sq[i*i]=1;
        }
    }
}
void prec()
{
    long long lcm=2;
    arr[1]=1;
    arr[2]=2;
    for(long long i=3; i<=mx; i++)
    {
        long long x=__gcd(lcm,i),p=5,sum=0;
        if(lcm>=x)
        {
            lcm=(lcm/x)*i;
        }
        else if(i>=x)
        {
            lcm=(i/x)*lcm;
        }
        else
        {
            lcm=(lcm*i)/x;
        }
        int x=lcm/p;
        while(x!=0)
        {

        }
        cout<<i<<" "<<lcm<<endl;
        arr[i]=lcm;
    }
    //cout<<arr[54]<<endl;
}
int main()
{
    //seive();
    prec();
    //freopen("input.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        long long x=arr[n];
        //cout<<x<<endl;
        while(x%10==0)
        {
            x/=10;
        }
        printf("%lld\n",x%10);
    }
    return 0;
}

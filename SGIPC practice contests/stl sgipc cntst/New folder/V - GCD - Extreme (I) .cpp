#include <bits/stdc++.h>
#define mx 200001
using namespace std;
int phi[mx+5];
bool flag[mx+5];
void euler()
{
    for(int i=1; i<=mx; i++)
    {
        phi[i]=i;
    }
    for(int i=2; i<=mx; i++)
    {
        if(!flag[i])
        {
            for(int j=i; j<=mx; j+=i)
            {
                flag[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
    long long sum=phi[2];
    for(int i=3; i<=mx; i++)
    {
        phi[i]+=sum;
        sum=phi[i];
    }
    //cout<<phi[6]<<endl;
    /*long long sum=0,k=0;
    for(int i=2; i<=mx; i++)
    {
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                sum+=j;
                if(j!=(i/j))
                    sum+=(i/j);
            }
        }
    }*/
}
long long extreme1(long long n)
{
    int sum=phi[n],k=0;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            sum+=i;
            if(i!=(n/i))
                sum+=(n/i);
        }
        sum-=k;
    }
    cout<<phi[n]<<" "<<sum<<endl;
    return phi[n]+sum;
}
/*long long arr[mx+5];
void precal()
{
    long long sum=0;
    for (int i=1; i<mx; i++)
    {
        for (int j=i+1; j<=mx; j++)
        {
            sum+=__gcd(i,j);
        }
        arr[i]=sum;
    }
}*/
int main()
{
    euler();
    int n,i,j,sum;
    while (scanf("%d",&n)==1 && n)
    {
        printf("%d\n",extreme1(n));
    }
    return 0;
}

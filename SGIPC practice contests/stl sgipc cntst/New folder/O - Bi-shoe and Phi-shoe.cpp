#include <bits/stdc++.h>
#define mx 1000004
using namespace std;
int phi[mx+5];
int xukha[mx+5];
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
    memset(flag,0,sizeof(flag));
    int temp;
    for(int i=2; i<=mx; i++)
    {
        if(phi[i]-temp>1 && !flag[phi[i]])
        {
            for(int j=temp+1; j<=phi[i]-1; j++)
            {
                if(!flag[j])
                {
                    xukha[j]=i;
                    flag[j]=1;
                }
            }
        }
        if(!flag[phi[i]])
        {
            xukha[phi[i]]=i;
            flag[phi[i]]=1;
            temp=phi[i];
        }
    }
}
int main()
{
    int t,n,c=0;
    long long sum;
    euler();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            sum+=xukha[arr[i]];
        }
        printf("Case %d: %lld Xukha\n",++c,sum);
    }
    return 0;
}


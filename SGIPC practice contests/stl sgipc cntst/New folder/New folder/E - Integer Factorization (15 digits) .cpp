#include <bits/stdc++.h>
#define mx 31622780
using namespace std;
bool flag[mx+5];
vector<int>vec;
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
    for(int i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
        }
    }
}
void factorize(long long n)
{
    for(int i=0; i<vec.size()&&((long long)vec[i]*vec[i])<=n; i++)
    {
        if(n%vec[i]==0)
        {
            int c=0;
            while(n%vec[i]==0)
            {
                n/=vec[i];
                c++;
            }
            printf("%d^%d ",vec[i],c);
        }
    }
    if(n>1)
    {
        printf("%lld^%d\n",n,1);
    }
    else
        printf("\n");
}
int main()
{
    seive();
    long long n;
    while(scanf("%lld",&n)==1 && n)
    {
        if(n%2 && n<mx && !flag[n])
        {
            printf("%lld^%d\n",n,1);
        }
        else
            factorize(n);
    }
}

#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    long long int n,m,i,j,temp,count=0;
    long long int val=1;
    cin>>n>>m;
    for(i=2; i<=n; i++)
    {
        for (j=2; j<=m; j+=1)
        {
            if (i==j)
            {
                val=val*j;
                val=val%(1000000000+7);
            }
            else if (abs(i-j)==1)
            {
                val=val;
            }
            else
            {
                val=val*gcd(i,j);
                val=val%(1000000000+7);
            }
        }
    }
    cout<<val%(1000000000+7)<<endl;
    return 0;
}

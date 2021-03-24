#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
using namespace std;

long long sod(long double n)
{
    long long sum=0;

    while(n>0)
    {
        sum+=(long long int)n%10;
        n=n/10;
    }

    return sum;
}
int f(long double n)
{
    while (n >= 10)
    {
        n = sod(n);
    }
    return n;
}
int main()
{
    int t,i,j,k;
    long long a,b;
    long double c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        c=pow(a,b);
        cout<<f(c)<<endl;
    }

    return 0;
}


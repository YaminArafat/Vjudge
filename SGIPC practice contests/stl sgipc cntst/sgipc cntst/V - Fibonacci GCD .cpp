#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
long long int fibo(long long int n)
{
    long long int a=0,b=1,c,i;
    if (n==0)
    {
        return 0;
    }
    for (i=2; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
long long int gcd(long long int x,long long int y)
{
    return y?gcd(y,x%y):x;
}
int main()
{
    long long int n,t,i,temp;
    cin>>t;
    long long int array[t];
    for (i=0; i<t; i++)
    {
        cin>>array[i];
        //array[i]=fibo(array[i]);
        //array[i]=array[i]%1000000007;
    }
    temp=gcd(array[0],array[1]);
    if(t>=2)
    {
        for (i=2; i<t; i++)
        {
            temp=gcd(array[i],temp);
        }
        temp=fibo(temp);
    }
    cout<<temp%1000000007<<endl;
    return 0;
}

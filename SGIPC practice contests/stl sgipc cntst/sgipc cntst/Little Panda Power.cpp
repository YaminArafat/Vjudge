#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
int big_mod(int a,int b,int x);
int big_mod(int a,int b,int x)
{
    if (b==0)
    {
        return 1;
    }
    else if (b>0)
    {
        if (b%2==0)
        {
            int y=big_mod(a,b/2,x);
            return (((y%x)*(y%x))%x);
        }
        else if (b%2)
        {
            return ((a%x*big_mod(a,b-1,x)%x)%x);
        }
    }
    else
    {
        return (int)(1%x)/pow(a,b);
    }
}
int main()
{
    int a,b,x,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x;
        cout<<big_mod(a,b,x)<<endl;
    }
}

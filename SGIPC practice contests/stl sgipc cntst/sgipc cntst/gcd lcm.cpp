#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    return b?gcd(b,a%b):a;
}
long long int lcm(long long int a,long long int b)
{
    return ((a/gcd(a,b))*b);
}
int main()
{
    long long int t,g,l,i,j,f=0;
    cin>>t;
    while (t--)
    {
        f=0;
        cin>>g>>l;
        for (i=1;i*i<=l;i++)
        {
            for (j=i+1;j<=l;j++)
            {
                if(gcd(i,j)==g && lcm(i,j)==l)
                {
                    f=1;
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if (f==0)
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}

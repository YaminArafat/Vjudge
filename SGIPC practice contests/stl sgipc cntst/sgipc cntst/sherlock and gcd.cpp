#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
long long unsigned int gcd(long long unsigned int a,long long unsigned int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    long long unsigned int t,n,i,j,temp,f=0,var;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        f=0;
        long long unsigned int array[100001];
        for(j=0; j<n; j++)
        {
            cin>>array[j];
        }
        for (j=0; j<n-1; j++)
        {
            if (array[j]==array[j+1])
            {
                f++;
            }

        }
        if (f==n-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            temp=gcd(array[0],array[1]);
            if (n>=2)
            {
                for (j=2; j<n; j++)
                {
                    temp=gcd(array[j],temp);
                }
            }
            if(temp==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}


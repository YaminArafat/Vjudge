#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long int ans;
    long long int t,n,k,m,i,j,a,b,c;
    long double val;
    cin>>t;
    a=1;
    b=2;
    for (i=0; i<t; i++)
    {
        cin>>n>>k>>m;
        //if (n!=0)
        //{
            for (j=1; j<=n; j++)
            {
                c=a+b;
                a=b;
                b=c;
            }
            //a=1.0*a;
            //k=1.0*k;
            //cout<<a<<endl;
            val=pow(k,a);
            //cout<<val<<endl;
            if (val>m)
            {
                ans=(int)val%m;
            }
            else
            {
                ans=val;
            }
            cout<<"Case "<<i+1<<": "<<ans<<endl;
            a=1;
            b=2;
        //}
        /*else
        {
            cout<<"Case "<<i+1<<": 1"<<endl;
        }*/
    }
    return 0;
}

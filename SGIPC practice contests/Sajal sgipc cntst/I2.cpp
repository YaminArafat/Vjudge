#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    long long int t,b,i,j,k,sum=0,temp,ad=0;
    long  double a,p;
    //scanf("%I64d",&t);
    cin>>t;
    for (i=1; i<=t; i++)
    {
        //scanf("%I64d %I64d",&a,&b);
        cin>>a>>b;
        p=pow(a,b);
        //cout<<p<<endl;
        //printf("%d\n",p);
        while (p!=0)
        {
            temp=p;
            p=(long long int)p%10;
            sum=sum+p;
            p=temp/10;
        }
        if (sum>=10)
        {
            while (sum!=0)
            {
                temp=sum;
                sum=sum%10;
                ad=ad+sum;
                sum=temp/10;
            }
            //printf("Case %I64d: %I64d\n",i,ad);
            cout<<"Case "<<i<<": "<<ad<<endl;
        }
        else
        {
            //printf("Case %I64d: %I64d\n",i,sum);
            cout<<"Case "<<i<<": "<<sum<<endl;
        }
        ad=0;
        sum=0;
    }
    return 0;
}

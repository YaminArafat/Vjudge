#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int tc,i,j,sum=0,mum=0;
    int str[19];
    cin>>tc;
    for (j=1; j<=tc; j++)
    {
        for (i=0; i<16; i++)
            scanf("%1d", &str[i]);
        for (i=0; i<16; i=i+2)
        {
            str[i]=str[i]*2;
            if ((str[i])>=10)
            {
                str[i]=str[i]%10+1;
            }
            sum=sum+str[i];
        }
        for (i=1; i<16; i=i+2)
        {
            str[i]=str[i];
            mum=mum+str[i];
        }
        if ((sum+mum)%10==0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
        sum=0;
        mum=0;
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int t,i,j,k,sum=0,a,b,mum=0,x,m;
    char str[21];
    cin>>t;
    getchar();
    for (i=0; i<t; i++)
    {
        gets(str);
        for (j=0; j<5; j=j+2)
        {
            if (str[j] != ' ')
            {
                a=(str[j]*2)-96;
                if (a>=10)
                {
                    b=a%10;
                    a=b+1;
                }
                else
                {
                    a=a;
                }
                sum=sum+a;
            }
        }
        for (j=5; j<strlen(str)-1; j=j+2)
        {
            if (str[j] != ' ')
            {
                a=(str[j]*2)-96;
                if (a>=10)
                {
                    b=a%10;
                    a=b+1;
                }
                else
                {
                    a=a;
                }
                sum=sum+a;
            }
        }
        for (k=1; k<4; k=k+2)
        {
            if (str[k] != ' ')
            {
                x=str[k]-48;
                mum=mum+x;
            }
        }

        for (k=4; k<strlen(str); k=k+2)
        {
            if (str[k] != ' ')
            {
                x=str[k]-48;
                mum=mum+x;
            }
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

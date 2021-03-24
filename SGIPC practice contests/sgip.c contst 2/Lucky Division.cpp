#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    if (n<11)
    {
        if (n%10==4 || n%10==7)
        {
            cout<<"YES"<<endl;
        }
        else if (n%4==0 || n%7==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if (n>10 && n<100)
    {
        if ((n)%10==4 || (n)%10==7)
        {
            cout<<"YES"<<endl;
        }
        else if (n%4==0 || n%7==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if (n>99)
    {
        if ((n/10)%4==0 || (n/10)%7==0)
        {
            cout<<"YES"<<endl;
        }
        else if ((n/100)%10==4 || (n/100)%10==7)
        {
            cout<<"YES"<<endl;
        }
        else if (n%4==0 || n%7==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int tc,r1,c1,r2,c2,dr,dc,i;
    cin>>tc;
    for (i=1; i<=tc; i++)
    {
        cin>>r1>>c1>>r2>>c2;
        if (r1>r2)
        {
            dr=r1-r2;
        }
        else if (r2>r1)
        {
            dr=r2-r1;
        }
        else if (r2==r1)
        {
            dr=0;
        }
        if (c1>c2)
        {
            dc=c1-c2;
        }
        else if (c2>c1)
        {
            dc=c2-c1;
        }
        else if (c2==c1)
        {
            dc=0;
        }
        if (dr==dc)
        {
            cout<<"Case "<<i<<": "<<"1"<<endl;
        }
        else
        {
            if (dr%2==dc%2)
            {
                cout<<"Case "<<i<<": "<<"2"<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": "<<"impossible"<<endl;
            }
        }
    }
    return 0;
}

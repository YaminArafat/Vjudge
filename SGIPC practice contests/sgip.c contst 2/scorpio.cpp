#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int tc,i,j,k,M,D,Y,m,d,y,day=1,day2,sum=0;
    int ar[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>tc;
    for (i=0;i<tc;i++)
    {
        cin>>M>>D>>Y;
        for (j=M;j<10;j++)
        {
            d=ar[j]-D;
            if (day<=240-d)
            {
                day++;
            }
        }
        for (k=M+1;k<10;k++)
        {
            sum=sum+ar[k];
        }
        if (sum==day)
        {
            cout<<k;
        }
        //cout<<day2;
    }
    return 0;
}

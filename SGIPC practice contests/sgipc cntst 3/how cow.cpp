#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int tc,x1,y1,x2,y2,m,x,y,i,j;
    cin>>tc;
    for (i=0; i<tc; i++)
    {
        cout<<"Case "<<i+1<<":"<<endl;
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        for (j=0; j<m; j++)
        {
            cin>>x>>y;
            if (x>x1 && y>y1 && x<x2 && y<y2)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}

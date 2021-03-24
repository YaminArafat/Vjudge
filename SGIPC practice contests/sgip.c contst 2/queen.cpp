#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int x1,y1,x,y,z,dx,dy;
    while (scanf("%d %d %d %d",&x1,&y1,&x,&y)==4)
    {
        if (x1==0 && y1==0 && x==0 && y==0)
        {
            break;
        }
        if (x1>x)
        {
            dx=x1-x;
        }
        else if (x>x1)
        {
            dx=x-x1;
        }
        else if (x==x1)
        {
            dx=0;
        }
        if (y1>y)
        {
            dy=y1-y;
        }
        else if (y>y1)
        {
            dy=y-y1;
        }
        else if (y==y1)
        {
            dy=0;
        }
        if ((dx==0 ||dy==0) && dx!=dy)
        {
            cout<<"1"<<endl;
        }
        else if (dx==0 && dy==0)
        {
            cout<<"0"<<endl;
        }
        else if (dx>0 && dy>0 && dx==dy)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
    return 0;
}

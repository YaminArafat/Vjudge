#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    while (n--)
    {
        int x,temp,f=0,b=0;
        for(int i=0;i<10;i++)
        {
            scanf("%d",&x);
            if(i>0)
            {
                if(x>temp)
                {
                   f++;
                }
                else if (x<temp)
                {
                    b++;
                }
            }
            temp=x;
        }
        if(f==9 || b==9)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }
    return 0;
}

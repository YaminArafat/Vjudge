#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,sum=0,x;
    scanf("%d %d",&n,&q);
    queue<int>qu,tmp,tmp2;
    int stre[n],arro[q],fall[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        sum+=x;
        qu.push(x);
    }
    tmp=qu;
    int temp=n,e;
    for(int i=0; i<q; i++)
    {
        scanf("%d",&x);
        if(x>=sum)
        {
            qu=tmp;
            printf("%d\n",n);
        }
        else
        {
            while(!qu.empty())
            {
                if(qu.front()<=x)
                {
                    x-=qu.front();
                    qu.pop();
                    if(!x)
                    {
                        break;
                    }
                }
                else
                {
                    /*e=qu.front()-x;
                    tmp2.push(e);
                    x=0;
                    qu.pop();*/
                    qu.front()=qu.front()-x;
                    x=0;
                    break;
                }
            }
            if(qu.empty())
                qu=tmp;
            printf("%d\n",qu.size());
        }
    }
    return 0;
}
/*int n,q,sum=0;
    scanf("%d %d",&n,&q);
    queue<int>qu,tmp;
    int stre[n],arro[q],fall[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&stre[i]);
        qu.push(stre[i]);
        sum+=stre[i];
        fall[sum]=i+1;
    }
    tmp=qu;
    int temp=n;
    for(int i=0;i<q;i++)
    {
        scanf("%d",&arro[i]);
        if(arro[i]>=sum)
        {
            printf("%d",n);
            temp=n;
        }
        else
        {
            printf("%d",temp-fall[arro[i]]);
            temp=temp-fall[arro[i]];
        }
    }*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,tmp1=0,tmp2=0;
    scanf("%d",&n);
    pair<int,int>p[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p[i].first,&p[i].second);
    }
    for(int i=0;i<n-1;i++)
    {
        if(p[i].first<=tmp1 && p[i].second<=tmp2)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(p[j].first>=p[i].first && p[j].second<=p[i].second)
            {
                printf("%d %d\n",j+1,i+1);
                return 0;
            }
        }
        tmp1=p[i].first;
        tmp2=p[i].second;
    }
    printf("-1 -1\n");
    return 0;
}

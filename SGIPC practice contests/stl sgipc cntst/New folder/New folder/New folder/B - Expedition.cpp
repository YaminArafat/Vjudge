#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,p,tmp;
    scanf("%d",&n);
    pair<int,int>p[n],temp;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&p[i].first,&p[i].second);
    }
    scanf("%d %d",&l,&p);
    for(int i=0; i<n; i++)
    {
        p[i].first=l-p[i].first;
        if(p[i].first>=p)
        {
            tmp=i;
        }
    }
    int te=0;
    for(int i=0; i<n-1; i++)
    {
        //if(p[i].first>p)
        {
            for(int j=i+1; j<n; j++)
            {
                if(p[j].first<p && p[j].second>te)
                {
                    te=p[j].second;
                    temp.first=p[j].first;
                    temp.second=p[j].seocnd;
                    p[j].first=p[i].first;
                    p[j].second=p[i].second;
                    p[i].first=temp.first;
                    p[i].second=temp.second;
                }
                else if (p[j].first<p)
                {
                    temp.first=p[j].first;
                    temp.second=p[j].seocnd;
                    p[j].first=p[i].first;
                    p[j].second=p[i].second;
                    p[i].first=temp.first;
                    p[i].second=temp.second;
                }
            }
        }
        p=
    }
}


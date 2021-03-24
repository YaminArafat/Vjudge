#include <bits/stdc++.h>
#define mx 100
using namespace std;
bool flag[mx+5];
int arr[mx+5];
vector<int>vec;
vector<pair<int,int> >adj[mx+5];
void seive()
{
    for(int i=3; i*i<=mx; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<=mx; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    vec.push_back(2);
    for(int i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
        }
    }
    memset(flag,0,sizeof(flag));
    for(int i=2; i<=mx; i++)
    {
        int tmp=i;
        for(int j=0; j<vec.size(); j++)
        {
            if(tmp%vec[j]==0)
            {
                flag[vec[j]]=1;
                while(tmp%vec[j]==0)
                {
                    tmp/=vec[j];
                    arr[vec[j]]++;
                }
                adj[i].push_back(make_pair(vec[j],arr[vec[j]]));
                if(tmp==1)
                {
                    break;
                }
            }
        }
        for(int k=0; k<adj[i-1].size(); k++)
        {
            if(!flag[adj[i-1][k].first])
                adj[i].push_back(adj[i-1][k]);
        }
        memset(flag,0,sizeof(flag));
    }
    for(int i=2; i<=mx; i++)
    {
        sort(adj[i].begin(),adj[i].end());
    }
}
int main()
{
    int t,n,i,j=0,c=0;
    seive();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        j++;
        printf("Case %d: %d = ",j,n);
        for(i=0; i<adj[n].size(); i++)
        {
            printf("%d (%d)",adj[n][i].first,adj[n][i].second);
            if(i<adj[n].size()-1)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*/*for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j].first<<" "<<adj[i][j].second<<endl;
        }
        cout<<endl;*/
/*for(int i=2; i<=mx; i++)
{
cout<<i<<"  ";
for(int j=0; j<adj[i].size(); j++)
{
    cout<<adj[i][j].first<<" "<<adj[i][j].second<<endl;
}
cout<<endl;
}*/
/*c=0;
        for(i=0; i<vec.size(); i++)
        {
            if(n%vec[i]==0)
            {
                while(n%vec[i]==0)
                {
                    n/=vec[i];
                    c++;
                }
                printf("%d (%d) ",vec[i],c);
                if(n>1)
                {
                    printf("* ");
                }
            }
        }*/

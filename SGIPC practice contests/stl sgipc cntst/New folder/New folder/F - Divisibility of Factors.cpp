#include <bits/stdc++.h>
#define mx 46345
using namespace std;
bool flag[mx+5];
vector<int>vec;
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
    for(long long i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
        }
    }
}
int main()
{
    int n,d;
    while (scanf("%d %d",&n,&d)==2 && n &&)
}

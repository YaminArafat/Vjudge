#include <bits/stdc++.h>
#define maX 18409201
using namespace std;
pair<int,int>primes;
vector<pair<int,int> >twprimes;
bool flag[18409201];
void seive(void)
{
    int i,j;
    for (i=3; i*i<=maX; i+=2)
    {
        if (flag[i]==0)
        {
            for(j=i*i; j<=maX; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    for (i=3; i<=maX; i+=2)
    {
        if (flag[i]==0 && flag[i+2]==0)
        {
            primes.first=i;
            primes.second=i+2;
            twprimes.push_back(primes);
        }
    }
}
int main()
{
    int n;
    seive();
    while (scanf("%d",&n)==1 && n!=EOF)
    {
        printf("(%d, %d)\n",twprimes[n-1].first,twprimes[n-1].second);
    }
    return 0;
}

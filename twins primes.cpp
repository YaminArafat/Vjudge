#include <iostream>
#include <vector>
#include <utility>
#include <cstdio>
#define maX 18409201
bool flag[18409201];
using namespace std;
pair<long long int,long long int>primes;
vector<pair<long long int,long long int> >twprimes;
//vector<pair<int,int> >::iterator it2;
void seive(void)
{
    long long int i,j;
    for (i=3; i*i<=maX; i+=2)
    {
        if (flag[i]==0)
        {
            for (j=i*i; j<=maX; j+=2*i)
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
            //make_pair(i,i+2);
            twprimes.push_back(primes);
            //printf("(%lld, %lld)\n",primes.first,primes.second);
        }
    }
}
int main()
{
    long long int n,i=3,j,k,count=0;
    seive();
    //while(!primes.empty())
    //{
    //cout<<primes.front()<<endl;
    //primes.pop_back();
    //}//
    /*for (it2 = twprimes.begin(); it2 != twprimes.end(); ++it2)
    {
        primes = *it2;
        cout << "(" << primes.first << "," << primes.second << ") ; ";
    }*/
    //for (i=0; i<twprimes.size(); i++)
    //{
    while (scanf("%lld",&n)==1 && n!=EOF)
    {
        printf("(%lld, %lld)\n",twprimes[n-1].first,twprimes[n-1].second);
    }
    //}
    /*while (scanf("%lld",&n)==1 && n!=EOF)
    {
        if (flag[n-1]==0 && flag[n]==0 && primes[n]-primes[n-1]==2)
        {
            printf("(%lld, %lld)\n",primes[n-1],primes[n]);
        }
        else if (flag[n]==0 && flag[n+1]==0 && primes[n+1]-primes[n]==2)
        {
            printf("(%lld, %lld)\n",primes[n],primes[n+1]);
        }
    }
    /*while (scanf("%lld",&n)==1 && n!=EOF)
    {
        count=0;
        for (i=3; i<=maX; flag[i+2]==0?i+=2:i+=4)
        {
            if (flag[i]==0 && flag[i+2]==0)
            {
                count++;
                if (count==n)
                {
                    printf("(%lld, %lld)\n",i,i+2);
                    break;
                }
            }
        }
    }*/
    return 0;
}

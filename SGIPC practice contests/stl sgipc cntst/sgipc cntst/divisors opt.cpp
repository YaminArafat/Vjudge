#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
void div_count(int l, int u)
{
    int temp,mx=0;
    for(int i=l;i<=u;i++)
    {
        int count=0;
        for(int j=1;j*j<=i;j++)
        {
            if(j*j==i)
            {
                count++;
            }
            else if (i%j==0)
            {
                count+=2;
            }
        }
        if(count>mx)
        {
            temp=i;
            mx=count;
        }
    }
    printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,temp,mx);
}
int main()
{
    int l,u,t;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d %d",&l,&u);
            div_count(l,u);
        }
    }
    return 0;
}



























/*#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
#define MAX 1000000
#define check(a,pos)(a&(1<<pos))
#define setb(a,pos)(a|=(1<<pos))
unsigned flag[(MAX/64)+2];
using namespace std;
int main()
{
    long long int t,l,u,i,j,k,count=1,divisor=1,temp,c,len,cnt,sqrtN;
    vector<long long int>divcount;
    vector<long long int>primes;
    while (cin>>t)
    {
        while (t--)
        {
            cin>>l>>u;
            for(i=l; i<=u; i++)
            {
                sqrtN=sqrt(i);
                primes.push_back(2);
                for (j=3; j<=sqrtN; j+=2)
                {
                    if (check(flag[j>>6],(j/2)%32)==0)
                    {
                        for (k=j*j; k<=i; k+=2*j)
                        {
                            flag[k>>6]=setb(flag[k>>6],(k/2)%32);
                        }
                    }
                }
                for(j=3; j<=i; j+=2)
                {
                    if (check(flag[j>>6],(j/2)%32)==0)
                    {
                        //cout<<i<<" ";
                        primes.push_back(j);
                        cout<<j<<" ";
                    }
                }
                len=primes.size();
                divisor=1;
                for (j=0; j<len; j++)
                {
                    if (i%primes[i]==0)
                    {
                        cnt=1;
                        while (i%primes[i]==0)
                        {
                            i/=primes[i];
                            cnt++;
                        }
                        divisor*=cnt;
                    }
                }
                count=0;
                for (j=1; j*j<=i; j++)
                {
                    if (j*j==i)
                    {
                        count++;
                    }
                    else if (i%j==0)
                    {
                        count+=2;
                    }
                }
                divcount.push_back(count);
                //cout<<count<<endl;
            }
            //std::sort(divcount.begin(),divcount.end(),greater<int>());
            temp=*max_element(divcount.begin(),divcount.end());
            divcount.clear();
            /*while(!divcount.size())
            {
                //cout<<divcount.back()<<" ";
                //divcount.pop_back();
            }
            for(i=l; i<=u; i++)
            {
                count=0;
                for (j=1; j*j<=i; j++)
                {
                    if (j*j==i)
                    {
                        count++;
                    }
                    else if (i%j==0)
                    {
                        count+=2;
                    }
                }
                if (count==temp)
                {
                    c=i;
                    break;
                }
            }
            cout<<"Between "<<l<<" and "<<u<<", "<<c<<" has a maximum of "<<temp<<" divisors."<<endl;
        }
    }
    return 0;
}*/

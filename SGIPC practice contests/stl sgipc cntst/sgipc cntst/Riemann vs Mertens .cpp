#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#define Check_bit(a,pos)(a&(1<<pos))
#define Set_bit(a,pos)(a=a|(1<<pos))
#define MAX 1000000
unsigned flag[(MAX>>6)+2];
using namespace std;
int main()
{
    vector<long long int>primes;
    vector<long long int>mu;
    vector<long long int>m;
    long long int n,i,j,k,val,count=0,ans=1,x=0,f=0,temp,va=0,sum=0;
    cin>>n;
    primes.push_back(2);
    mu.push_back(1);
    m.push_back(1);
    for( i = 3; i*i<= 1000000; i += 2 )
    {
        if( Check_bit(flag[i>>6],(i/2)%32)==0)
        {
            for(j = i*i; j <= 1000000; j += 2*i )
            {
                flag[j>>6]=Set_bit(flag[j>>6],(j/2)%32);
            }
        }
    }
    for(i=3; i<=1000000; i+=2)
    {
        if(Check_bit(flag[i>>6],(i/2)%32)==0)
        {
            primes.push_back(i);
            //cout<<i<<" ";
        }
    }
    val=primes.size();
    for (k=2; k<=1000000; k++)
    {
        temp=k;
        for(i=0; i<val; i++)
        {
            if (temp%primes[i]==0)
            {
                va++;
                while (temp%primes[i]==0)
                {
                    x++;
                    temp=temp/primes[i];
                    if (x>1)
                    {
                        break;
                    }
                }
                //cout<<primes[i]<<"^"<<x<<endl;
            }
            if (x>1)
            {
                mu.push_back(0);
            }
            x=0;
            break;
        }
        if(val%2)
        {
            mu.push_back(-1);
        }
        else
        {
            mu.push_back(1);
        }
        sum+=mu[k-1];
        m.push_back(sum);
        va=0;
       cout<<k<<" = "<<mu[k-1]<<" "<<m[k-1]<<endl;
    }
    return 0;
}

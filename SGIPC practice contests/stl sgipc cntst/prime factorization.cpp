#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    vector<long long unsigned int>prime;
    long long unsigned int n,i,j,val,count=0,ans=1,x=0,f=0,sqrtN;
    cin>>n;
    sqrtN=sqrt(n);
    //cout<<sqrtN<<endl;
    bool flag[n+50];
    flag[0]=1;
    flag[1]=1;
    prime.push_back(2);
    for(i=4; i<=sqrtN; i+=2)
    {
        flag[i]=1;
    }
    for (i=3; i*i<=(long long unsigned int)sqrtN; i=i+2)
    {
        if (flag[i]==0)
        {
            for (j=i*i; j<=sqrtN; j=2*i+j)
            {
                flag[j]=1;

            }
        }
    }
    for (i=3; i<=sqrtN; i+=2)
    {
        if (flag[i]==0)
        {
            cout<<i<<endl;
            prime.push_back(i);
        }
    }
    val=prime.size();
    //cout<<val<<endl;
    for(i=0; i<val; i++)
    {
        if (n%prime[i]==0)
        {
            while (n%prime[i]==0)
            {
                x++;
                n=n/prime[i];
            }
            cout<<prime[i]<<"^"<<x<<endl;
        }
        x=0;
        //sqrtN=sqrt(n);
    }
    return 0;
}


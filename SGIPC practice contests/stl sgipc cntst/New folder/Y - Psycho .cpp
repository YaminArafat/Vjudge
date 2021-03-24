#include <bits/stdc++.h>
#define mx 3165
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
    for(int i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
        }
    }
}
bool factorize(int n)
{
    int odd=0,eve=0;
    for(int i=0; i<vec.size()&&(vec[i]*vec[i]<=n); i++)
    {
        if(n%vec[i]==0)
        {
            int c=0;
            while(n%vec[i]==0)
            {
                n/=vec[i];
                c++;
            }
            if(c%2)
            {
                odd++;
            }
            else
            {
                eve++;
            }
        }
        if(n==1)
        {
            break;
        }
    }
    if(n>1)
    {
        odd++;
    }
    if(eve>odd)
    {
        return true;
    }
    return false;
}
int main()
{
    int t,n;
    seive();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(factorize(n))
        {
            printf("Psycho Number\n");
        }
        else
        {
            printf("Ordinary Number\n");
        }
    }
    return 0;
}
/*
for(int i=2; i<=10000000; i+=2)
    {
        int tmp=i,c,odd=0,eve=0;
        for(int j=0; j<vec.size(); j++)
        {
            if(tmp%vec[j]==0)
            {
                c=0;
                while(tmp%vec[j]==0)
                {
                    tmp/=vec[j];
                    c++;
                }
                if(c%2)
                {
                    odd++;
                }
                else
                {
                    eve++;
                }
            }
            if(tmp==1)
            {
                break;
            }
        }
        if(tmp>1)
        {
            odd++;
        }
        if(eve>odd)
        {
            ans[i]=1;
        }
        //cout<<ans[i]<<endl;
    }
    //cout<<1<<endl;
    for(int i=3; i<=9999999; i+=2)
    {
        if(flag[i])
        {
            int tmp=i,c,odd=0,eve=0;
            for(int j=0; j<vec.size(); j++)
            {
                if(tmp%vec[j]==0)
                {
                    c=0;
                    while(tmp%vec[j]==0)
                    {
                        tmp/=vec[j];
                        c++;
                    }
                    if(c%2)
                    {
                        odd++;
                    }
                    else
                    {
                        eve++;
                    }
                }
            }
            if(tmp>1)
            {
                odd++;
            }
            if(eve>odd)
            {
                ans[i]=1;
            }
        }
    }
    /*int x=0;
    for(int i=2;i<=10000000;i++)
    {
        x++;
        //cout<<ans[i]<<endl;
    }
    cout<<x<<endl;*/

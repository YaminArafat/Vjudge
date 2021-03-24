#include <bits/stdc++.h>
#define mx 1000000
using namespace std;
long long arr_2[mx+5];
long long arr_5[mx+5];
void func()
{
    long long two=0,five=0;
    for(int i=2; i<=mx; i++)
    {
        /*if(i%2==0)
        {
            int tmp=i;
            while(tmp%2==0)
            {
                two++;
                tmp/=2;
            }
            if(tmp%5==0)
            {
                while(tmp%5==0)
                {
                    five++;
                    tmp/=5;
                }
            }
        }
        else */if (i%5==0)
        {
            int tmp=i;
            while(tmp%5==0)
            {
                five++;
                tmp/=5;
            }
        }
        //arr_2[i]=two;
        arr_5[i]=five;
    }
}
int main()
{
    long long  t,n,r,p,q,k,c=0,tot_u2,tot_u5,tot_l2,tot_l5,ans_2,ans_5,ans;
    func();
    scanf("%lld",&t);
    while(t--)
    {
        c++;
        scanf("%lld %lld %lld %lld",&n,&r,&p,&q);
        //tot_u2=arr_2[n]+((arr_2[p]-arr_2[p-1])*q);
        tot_u5=arr_5[n]+((arr_5[p]-arr_5[p-1])*q);
        //tot_l2=arr_2[r]+arr_2[n-r];
        tot_l5=arr_5[r]+arr_5[n-r];
        //ans_2=tot_u2-tot_l2;
        ans_5=tot_u5-tot_l5;
        //ans=min(ans_2,ans_5);
        printf("Case %lld: %lld\n",c,ans_5);
    }
    return 0;
}
/*
/*two=0;
        five=0;
        if(p%2==0)
        {
            while(p%2==0)
            {
                p/=2;
                two+=q;
            }
            if(p%5==0)
            {
                while(p%5==0)
                {
                    p/=5;
                    five+=q;
                }
            }
        }
        else if(p%5==0)
        {
            while(p%5==0)
            {
                p/=5;
                five+=q;
            }
        }*/
        //cout<<arr_2[p]-arr_2[p-1]<<" "<<arr_5[p]-arr_5[p-1]<<endl;
        //cout<<two<<" "<<five<<endl;
        //cout<<arr_2[n-r]<<" "<<arr_5[n-r]<<endl;


/*bool flag[mx+100];
//long long facto_N[mx];
//long long facto_R[mx];
//long long facto_NR[mx];
vector<long long>vec;
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
            //cout<<i<<endl;
            vec.push_back(i);
        }
    }
}
int factorial(long long n,long long r,long long p,long long q)
{
    long long two=0,five=0,two_L=0,five_L=0;
    for(int i=2; i<=n; i++)
    {
        if(i%2==0)
        {
            int tmp=i;
            while(tmp%2==0)
            {
                two++;
                tmp/=2;
            }
        }
        if(i%5==0)
        {
            int tmp=i;
            while(tmp%5==0)
            {
                five++;
                tmp/=5;
            }
        }
    }
    for(int i=2; i<=n-r; i++)
    {

        if(i%2==0)
        {
            int tmp=i;
            while(tmp%2==0)
            {
                two_L++;
                tmp/=2;
            }
        }
        if(i%5==0)
        {
            int tmp=i;
            while(tmp%5==0)
            {
                five_L++;
                tmp/=5;
            }
        }
    }
    for(int i=2; i<=r; i++)
    {

        if(i%2==0)
        {
            int tmp=i;
            while(tmp%2==0)
            {
                two_L++;
                tmp/=2;
            }
        }
        if(i%5==0)
        {
            int tmp=i;
            while(tmp%5==0)
            {
                five_L++;
                tmp/=5;
            }
        }
    }
    long long tmp=p;
    for(int i=0; i<vec.size(); i++)
    {
        //cout<<"h"<<endl;
        if(p%vec[i]==0)
        {
            //cout<<"h"<<endl;
            while(p%vec[i]==0)
            {
                p/=vec[i];
                if(vec[i]==2)
                {
                    two+=q;
                    //cout<<"h"<<endl;
                }
                if(vec[i]==5)
                {
                    five+=q;
                }
            }
        }
    }
    /*cout<<two-two_L<<" "<<five-five_L<<endl;//<<" "<<two_L<<" "<<five_L<<endl;
    return min(two-two_L,five-five_L);
}
/*for(int i=2,int j=2,int k=2;i<=n,j<=r,k<=n-r;i++,j++,k++)
    {
        facto_N[i]++;
        facto_R[j]++;
        facto_R[k]++;
    }
    int x=(n-r)>r?(n-r):r;
    for(int i=2;i<=x;i++)
    {
        if(facto_N[i]>facto_R[i])
        {
            facto_N[i]=facto_N[i]-facto_R[i];
            facto_R[i]=0;
        }
        else
        {
            facto_R[i]=facto_R[i]-facto_N[i];
            facto_N[i]=0;
        }
    }
    for(int i=0;i<vec.size();i++)
    {
        if(p%vec[i]==0)
        {
            while(p%vec[i]==0)
            {
                p/=vec[i];
                facto_N[vec[i]]+=q;
            }
        }
    }
    for(i=2;i<=x;i++)
    {
        while(facto_R[i]--)
        {
            for(i=)
        }
    }*/

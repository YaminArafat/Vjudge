#include <bits/stdc++.h>
using namespace std;
int binary_srch(int n)
{
    int hgh=400000020,temp=0;
    int low=5;
    while(low<hgh)
    {
        int mid=(low+hgh)/2,x,p=5,sum=0;
        if((low+hgh)%2)
        {
            mid++;
        }
        x=mid/p;
        while(x)
        {
            sum+=x;
            p*=5;
            x=mid/p;
        }
        if(sum==n)
        {
            temp=mid;
        }
        if(sum<n)
        {
            low=mid+1;
        }
        else
        {
            hgh=mid-1;
        }
    }
    if(temp)
    {
        return (temp/5)*5;
    }
    return 0;
}
int main()
{
    int t,n,c=0,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        x=binary_srch(n);
        if(x)
            printf("Case %d: %d\n",++c,x);
        else
            printf("Case %d: impossible\n",++c);
    }
    return 0;
}
/*


//cout<<temp<<endl;
    /*long long x,p=5,sum=0;
    x=temp/p;
    while(x)
    {
        sum+=x;
        p*=5;
        x=temp/p;
    }
    if(sum==n)
    {
        return temp;
    }
    return 0;*/

//long long arr_ans[mx+5];
//vector<long long>arr_ans;
//bool flag[mx+5];
//map<long long,long long>mp;
/*void func()
{
    long long two=0,five=0,p,sum;
    for(long long i=5; i<=mx; i+=5)
    {
        p=1;
        sum=0;
        while(i/(powl(5,p)))
        {
            sum+=(i/(powl(5,p)));
            p++;
        }
        arr_ans[sum]=i;
    }
}*/
/*if(i%2==0)
{
    long long tmp=i;
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
else if (i%5==0)
{
    long long tmp=i;
    while(tmp%5==0)
    {
        five++;
        tmp/=5;
    }
}
if(!flag[min(two,five)])
{
    //arr_ans[min(two,five)]=i;
    mp[min(two,five)]=i;
    flag[min(two,five)]=1;
}
}*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,count=0,tmp1,tmp2,num=0;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        count=0;
        num=0;
        if(n%2==0)
        {
            for(i=1; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    tmp1=sqrt(i);
                    if(tmp1*tmp1==i)
                    {
                        if(i%2==0)
                            count++;
                    }
                    if(i!=(n/i) && i!=1)
                    {
                        tmp1=sqrt(int(n/i));
                        if(tmp1*tmp1==(n/i))
                        {
                            if((n/i)%2==0)
                                count++;
                        }
                    }
                    num+=2;
                    //cout<<i<<endl;
                }
                if(i*i==n)
                {
                    num--;
                }
            }
        }
        if(num&&count)
        {
            int gc=__gcd(num-1,count);
            //cout<<gc<<endl;
            if(gc==1)
            {
                num--;
            }
            count/=gc;
            num/=gc;
        }
        if(count)
            printf("%d/%d\n",count,num);
        else
            printf("0\n");
    }
    return 0;
}

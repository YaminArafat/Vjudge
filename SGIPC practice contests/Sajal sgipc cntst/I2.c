//#include<iostream>
#include<stdio.h>
#include<math.h>
//#include<cstdlib>
//#include<algorithm>
//using namespace std;
int main()
{
    long long int t,b,i,j,k,sum=0,temp,ad=0;
    long  double a,p;
    scanf("%d",&t);
    for (i=1; i<=t; i++)
    {
        scanf("%d %d",&a,&b);
        p=pow(a,b);
        //cout<<p<<endl;
        while (p!=0)
        {
            temp=p;
            p=(long long int)p%10;
            sum=sum+p;
            p=temp/10;
        }
        if (sum>=10)
        {
            while (sum!=0)
            {
                temp=sum;
                sum=sum%10;
                ad=ad+sum;
                sum=temp/10;
            }
            printf("Case %d: %d\n",i,ad);
            //cout<<ad<<endl;
        }
        else
        {
            printf("Case %d: %d\n",i,sum);
            //cout<<sum<<endl;
        }
        ad=0;
        sum=0;
    }
    //return 0;
}

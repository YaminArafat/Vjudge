#include <bits/stdc++.h>
using namespace std;
long long bs(long long n,long long k)
{
    long long temp2,temp4,hgh,low=powl(10,k),mid,x,q=0;
    hgh=low*n;
    x=hgh/low;
    if(x%2==0)
        hgh+=low;
    //cout<<hgh<<endl<<low<<endl;
    while(low<hgh)
    {
        mid=(hgh+low)/2;
        /*if((hgh+low)%2)
        {
            mid++;
        }*/
        //cout<<mid<<endl;
        long long c=0,temp=mid,p=0,tmp=mid;
        if(mid%10==0)
        {
            while(mid%10==0)
            {
                mid/=10;
                c++;
            }
        }
        /*while(temp)
        {
            temp/=10;
            p++;
        }*/
        cout<<hgh<<" "<<tmp<<" "<<low<<endl;
        if(c>=k && tmp%n==0)
        {
            temp2=tmp;
            //cout<<temp2<<endl;
        }
        if(tmp==q)
        {
            break;
        }
        q=tmp;
        x=tmp/low;
        if(x%2)
        hgh=tmp;
        else
           hgh=tmp+low;

    }
    return temp2;
    //cout<<temp2<<endl;
    /*low=powl(10,k);
    hgh=low*n;
    //cout<<hgh<<" "<<low<<endl;
    while(low<hgh)
    {
        mid=(hgh+low)/2;
        /*if((hgh+low)%2)
        {
            mid++;
        }*/
        /*long long c=0,temp=mid,p=0,tmp=mid;
        if(mid%10==0)
        {
            while(mid%10==0)
            {
                mid/=10;
                c++;
            }
        }
        /*while(temp)
        {
            temp/=10;
            p++;
        }*/
        /*if(c>=k && tmp%n==0)
        {
            temp4=tmp;
            //cout<<temp4<<endl;
        }
        low=mid;
    }
    return min(temp2,temp4);*/
}
int main()
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    printf("%lld\n",bs(n,k));
}

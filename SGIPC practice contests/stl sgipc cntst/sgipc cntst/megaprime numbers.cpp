#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#define mx 1000000000
#define Check_bit(a,pos)(a&(1<<pos))
#define Set_bit(a,pos)(a=a|(1<<pos))
unsigned flag[(mx>>6)+2];
using namespace std;
int main()
{
    long long int frst,lst,i,j,sqrt_lst,val,count=0,a,pos,temp,num,x=0,y=0;
    cin>>frst>>lst;
    vector<long long int>primes;
    vector<long long int>megaprimes;
    if(frst<=2)
    {
        primes.push_back(2);
    }
    for( i =3; i*i<= lst; i += 2 )
    {
        if( Check_bit(flag[i>>6],(i/2)%32)==0)
        {
            for(j = i*i; j <= lst; j += 2*i )
            {
                flag[j>>6]=Set_bit(flag[j>>6],(j/2)%32);
            }
        }
    }
    if (frst%2)
    {
        for (i=frst; i<=lst; i+=2)
        {
            if (Check_bit(flag[i>>6],(i/2)%32)==0)
            {
                //cout<<i<<" ";
                primes.push_back(i);
            }
        }
    }
    else
    {
        for (i=frst+1; i<=lst; i+=2)
        {
            if (Check_bit(flag[i>>6],(i/2)%32)==0)
            {
                //cout<<i<<" ";
                primes.push_back(i);
            }
        }
    }
    //cout<<endl;
    val=primes.size();
    for (i=0; i<val&&primes[i]<=lst; i++)
    {
        if (primes[i]>lst)
        {
            break;
        }
        temp=primes[i];
        while (temp!=0)
        {
            num=temp%10;
            x++;
            if (Check_bit(flag[num>>6],(num/2)%32)==0 &&  num!=1)
            {
                count++;
            }
            temp/=10;
        }
        if (count==x)
        {
            //cout<<primes[i]<<" ";
            y++;
        }
        x=0;
        count=0;
    }
    cout<<y<<endl;
    y=0;
}
/*long long unsigned int frst,lst,i,j,sqrt_lst,val,count=0,a,pos,temp,num,x=0;
    long long unsigned int flag[MAX/64];
    cin>>frst>>lst;
    sqrt_lst=sqrt(lst);
    vector<long long unsigned int>primes;
    vector<long long unsigned int>megaprimes;
    if(frst<=2)
    {
        primes.push_back(2);
    }
    for (i=3; i<=sqrt_lst; i+=2)
    {
        if (checkbit(flag[i>>6],(i>>1)%32)==0)
        {
            for (j=i*i; j<=lst; j+=2*i)
            {
                flag[j>>6]=setbit(flag[j>>6],(j>>1)%32);
            }
        }
    }
    if (frst%2)
    {
        for (i=frst; i<=lst; i+=2)
        {
            if (checkbit(flag[i>>6],(i>>1)%32)==0 && i!=1)
            {
                cout<<i<<" ";
                primes.push_back(i);
            }
        }
    }
    else
    {
        for (i=frst+1; i<=lst; i+=2)
        {
            if (checkbit(flag[i>>6],(i>>1)%32)==0)
            {
                cout<<i<<" ";//<<checkbit(flag[i>>6],(i>>1)%32)<<endl;
                primes.push_back(i);
            }
        }
    }
    for (i=4; i<=lst; i+=2)
    {
        if (checkbit(flag[i>>6],(i>>1)%32)==0)
        {
            flag[i>>6]=setbit(flag[i>>6],(i>>1)%32);
        }
    }
    cout<<endl;
    //cout<<checkbit(flag[6>>6],(6>>1)%32);
    val=primes.size();
    for (i=0; i<val && primes[i]<=lst; i++)
    {
        //if ()
        temp=primes[i];
        while (temp!=0)
        {
            num=temp%10;
            x++;
            if (checkbit(flag[num>>6],(num>>1)%32)==0 &&  num!=1)
            {
                count++;
                //cout<<num<<" "<<checkbit(flag[num>>6],(num>>1)%32)<<endl;
            }
            //if (checkbit(num));
            temp/=10;
        }
        if (count==x)
        {
            cout<<primes[i]<<" ";
        }
        x=0;
        count=0;
    }*/

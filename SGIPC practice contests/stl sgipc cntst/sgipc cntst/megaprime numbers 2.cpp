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
    long long int frst,lst,i,j,sqrt_lst,val,count=0,a,pos,temp,num,x=0,y=0,k;
    cin>>frst>>lst;
    vector<long long int>primes;
    vector<long long int>megaprimes;
    if(frst<=2)
    {
        primes.push_back(2);
    }
    for( i =3; i*i<= mx; i += 2 )
    {
        if( Check_bit(flag[i>>6],(i/2)%32)==0)
        {
            for(j = i*i; j <= mx; j += 2*i )
            {
                flag[j>>6]=Set_bit(flag[j>>6],(j/2)%32);
            }
        }
    }
    for( i =3; i*i<= mx; i += 2 )
    {
        if( Check_bit(flag[i>>6],(i/2)%32)==0)
        {
            primes.push_back(i);
        }
    }
    val=primes.size();
    for (i=frst; i<=lst; i+=2)
    {
        k=0;
        for(j=0; primes[j]*primes[j]<=i; j++)
        {
            if(i%primes[j]==0)
            {
                k++;
            }
        }
        if (k==1)
        {
            temp=i;
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
    }
    cout<<y<<endl;
}
    /*if (frst%2)
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
}*/

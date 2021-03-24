#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
#define mx 1000000000
#define Check_bit(a,pos)(a&(1<<pos))
#define Set_bit(a,pos)(a=a|(1<<pos))
unsigned flag[(mx>>6)+2];
using namespace std;
int main()
{
    long long int n,m,i,j,count=0;
    cin>>n>>m;
    for( i =3; i*i<= m; i += 2 )
    {
        if( Check_bit(flag[i>>6],(i/2)%32)==0)
        {
            for(j = i*i; j<= m; j += 2*i )
            {
                flag[j>>6]=Set_bit(flag[j>>6],(j/2)%32);
            }
        }
    }
    for (i=n; i<=m; i+=2)
    {
        if( Check_bit(flag[i>>6],(i/2)%32)==0)
        {
           // cout<<i<<" ";
        }
    }
    if(n%2)
    {
        for(i=n; i<=m-2; i+=2)
        {
            if (Check_bit(flag[i>>6],(i/2)%32)==0&&Check_bit(flag[(i+2)>>6],((i+2)/2)%32)==0&&i!=1)
            {
                count++;
            }
        }
    }
    else
    {
        for(i=n+1; i<=m-2; i+=2)
        {
            if (Check_bit(flag[i>>6],(i/2)%32)==0&&Check_bit(flag[(i+2)>>6],((i+2)/2)%32)==0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}


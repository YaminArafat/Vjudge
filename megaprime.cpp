#include<bits/stdc++.h>
using namespace std;
bool arr[1000000000];
bool seive[31622780];
void seiv(void)
{
    long long int i , j;
    seive[0]=1;
    seive[1]=1;
    for(i=4;i<=31622780;i+=2)seive[i]=1;
    for(i=3;i<=5623;i+=2)
    {
        for(j=i*i;j<=31622780;j+=2*i)
        {
            seive[j]=1;
        }
    }
}
 int main()
{
///memset(arr,1,1000000000);
long long int a,b;
cin>>a>>b;
long long int z = sqrtl(b) , low,j;
for(long long int i = 2 ;i<=z;i++)
{
    if(seive[i]==0)
    {
        long long int low = ceil(a/i)*i;
        cout<<low<<" LOW\n";
        for(j=low;j<=b;j+=i)
        {
           arr[j-a]=1;
        }
    }
}
long long int i;
//for(i=0;i<b-a+1;i++)cout<<arr[i]<<endl;
///cout<<a<<" "<<b<<endl;

}


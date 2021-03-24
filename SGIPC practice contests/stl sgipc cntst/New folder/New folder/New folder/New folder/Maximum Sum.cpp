#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0,mx=-9223372036854775807,mx2=-9223372036854775807;
    //cout<<mx<<endl;
    //cout<<-3-2<<endl;
    scanf("%lld",&n);
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            if(arr[i]>mx2)
            {
                mx2=arr[i];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
            if(sum>mx)
            {
                mx=sum;
            }
            //cout<<mx<<endl;
        }
        else
        {
            if(sum>mx && sum)
            {
                mx=sum;
                //cout<<sum<<endl;
            }
            sum=0;
        }

    }
    //cout<<sum<<endl;
    printf("%lld\n",max(mx,mx2));
    return 0;
}
/*

if(arr[i]>0)
        {
            sum+=arr[i];
            if(sum>mx)
            {
                mx=sum;
            }
            //cout<<mx<<endl;
        }
        else if(arr[i]<0)
        {
            if(arr[i]>mx2)
            {
                mx2=arr[i];
            }
        }
        else
        {
            if(sum>mx && sum)
            {
                mx=sum;
                //cout<<sum<<endl;
            }
            sum=0;
        }

*/

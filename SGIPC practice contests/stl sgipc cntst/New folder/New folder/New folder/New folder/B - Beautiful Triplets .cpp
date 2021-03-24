#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d,temp,ans=0,cnt;
    scanf("%lld %lld",&n,&d);
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<n-2;i++)
    {
        temp=arr[i];
        cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]-temp==d)
            {
                cnt++;
                if(cnt==2)
                {
                    ans++;
                    break;
                }
                temp=arr[j];
            }
        }
    }
    printf("%lld\n",ans);
}

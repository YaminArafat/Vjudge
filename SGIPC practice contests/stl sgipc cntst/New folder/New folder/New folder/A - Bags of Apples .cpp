#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n,sum=0,sum2=0,val1=0,val2=0,mx=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    //cout<<sum<<endl;
    sort(arr,arr+n);
    for(int i=0; i<n-1; i++)
    {
        if((sum-sum2)%3==0)
        {
            //printf("%d\n",sum-sum2);
            val1=sum-sum2;
            mx=max(mx,val1);
            //cout<<sum-sum2<<endl;
            break;
        }
        else
        {
            sum2+=arr[i];
        }
        for(int j=i+1; j<n; j++)
        {
            if((sum-sum2)%3==0)
            {
                //printf("%d\n",sum-sum2);
                val2=sum-sum2;
                mx=max(mx,val2);
                //cout<<mx<<endl;
                break;
            }
            sum2+=arr[j];
        }
        sum2=0;
    }
    /*sum2=0;
    for(int i=0; i<n; i++)
    {
        if((sum-sum2)%3==0)
        {
            val2=sum-sum2;
            break;
        }
        if(i>0 && arr[i]!=arr[i-1])
        {
            sum2=0;
        }
        sum2+=arr[i];
    }*/
    printf("%d\n",mx);
    return 0;
}

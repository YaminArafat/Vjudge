#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,max=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]!=max)
        {
            sum+=max-arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}

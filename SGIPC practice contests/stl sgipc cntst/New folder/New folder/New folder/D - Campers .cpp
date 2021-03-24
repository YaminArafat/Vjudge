#include <bits/stdc++.h>
using namespace std;
bool flag[1000005];
int main()
{
    int n,k,cnt=0;
    scanf("%d %d",&n,&k);
    int arr[k];
    for(int i=0; i<k; i++)
    {
        scanf("%d",&arr[i]);
        flag[arr[i]]=1;
        //if(i>0)
        flag[arr[i]-1]=1;
        //if(i<k-1)
        flag[arr[i]+1]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(!flag[i])
        {
            flag[i+1]=1;
            flag[i-1]=1;
            cnt++;
        }
        //cout<<i<<" "<<flag[i]<<endl;
    }
    printf("%d\n",cnt+k);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q,i,sum=0,count=0,j=0;
    while (cin>>t)
    {
        j=0;
        while (t--)
        {
            cin>>n>>p>>q;
            int arr[n];
            sum=0;
            count=0;
            for (i=0; i<n; i++)
            {
                cin>>arr[i];
            }
            for (i=0; i<n; i++)
            {
                sum+=arr[i];
                if(sum<=q)
                {
                    if(count<p)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            cout<<"Case "<<j+1<<": "<<count<<endl;
            j++;
        }
    }
    return 0;
}

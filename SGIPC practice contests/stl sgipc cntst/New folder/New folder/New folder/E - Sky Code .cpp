#include <bits/stdc++.h>
#define maax 10000
using namespace std;
long long arr[10000][10000];
long long arr2[10000][10000];
void func()
{
    int mx=0,mn=1000000000;
    long long p=1;
    for (int i=2; i<=maax; i++)
    {
        //if(i%2)
        {
            for(int j=1; j<=i/2; j++)
            {
                p=1,mx=0,mn=1000000000;
                mx=max(j,i-j);
                for(int k=i; k>mx; k--)
                {
                    p*=k;
                }
                mn=min(j,i-j);
                for(int k=2; k<=mn; k++)
                {
                    p/=k;
                }
                arr[i][j]=p;
                arr[i][i-j]=p;
            }
        }
        /*else
        {
            for(int j=1;j<=i/2;j++)
            {
                p=1,mx=0,mn=1000000000;
                mx=max(j,i-j);
                for(int k=i;k>mx;k--)
                {
                    p*=k;
                }
                mn=min(j,i-j);
                for(int k=2;k<=mn;i++)
                {
                    p/=k;
                }
                arr[i][j]=p;
                arr[i][i-j]=p;
            }
        }*/
    }
    for(int i=2; i<=mx; i++)
    {
        for(int j=1; j<=mx/2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    //func();
    while(scanf("%d",&n)==1 && n!=EOF)
    {
        int arr[n],odd=0,eve=0,n_o,n_e,r_o,r_e;
        int mx=0,mn=1000000000,maz;
        long long p=1,temp=1,sum=0;
        //int arr_u[n],int arr_l[n];
        for(int i=1; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]%2)
            {
                odd++;
            }
            else
            {
                eve++;
            }
        }
        for(int j=1; j<=odd/2; j++)
        {
            p=1,mx=0,mn=1000000000;
            mx=max(j,odd-j);
            for(int k=odd; k>mx; k--)
            {
                p*=k;
            }
            mn=min(j,odd-j);
            for(int k=2; k<=mn; k++)
            {
                p/=k;
            }
            arr[odd][j]=p;
            arr[odd][odd]=odd;
            arr[odd][odd-j]=p;
        }
        for(int j=1; j<=eve/2; j++)
        {
            temp=1,mx=0,mn=1000000000;
            mx=max(j,eve-j);
            for(int k=eve; k>mx; k--)
            {
                temp*=k;
            }
            mn=min(j,eve-j);
            for(int k=2; k<=mn; k++)
            {
                temp/=k;
            }
            arr2[eve][j]=temp;
            arr2[eve][eve]=eve;
            arr2[eve][eve-j]=temp;
        }
        maz=min(eve,odd);
        for(int i=eve-1, j=1;j<=maz;i--,j++)
        {
            sum+=arr2[eve][i]*arr[odd][j];
        }
        printf("%lld\n",sum);
    }
}

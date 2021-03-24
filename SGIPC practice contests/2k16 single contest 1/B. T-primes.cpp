#include <bits/stdc++.h>
using namespace std;
long long int divcount(long long int num)
{
    long long int count=0,i;
    for (i=1;i*i<=num;i++)
    {
        if (i*i==num)
        {
            count++;
        }
        else if (num%i==0)
        {
            count+=2;
        }
    }
    return count;
}
int main()
{
    long long int n,i;
    cin>>n;
    long long int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<n;i++)
    {
        if (divcount(arr[i])==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

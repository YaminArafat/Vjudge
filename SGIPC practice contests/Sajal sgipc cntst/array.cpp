#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int t,n,k,c=0,ara[101];
    //cin>>t;
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(int i=0;i<n,l<n-1;i++,l++) {
        cout<<ara[i];
        if(ara[l]<ara[l+1]) c++;
    }
    cout<<c<<endl;
    return 0;
}

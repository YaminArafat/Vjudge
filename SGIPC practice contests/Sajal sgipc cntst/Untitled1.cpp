#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int jer[101],i,j=0,k,a,n,m;
    cin>>n;
    for(i=0;i<2*n;i++) {
        cin>>jer[i];
    }
    for(k=0,a=1;k<(2*n)-1; i++,a+=2)
    {
        if(jer[k]==jer[a]) j++;

        if(a==((2*n)-1))
        {
            k+=2;
            a=-1;
        }
    }
    cout<<j<<endl;

    return 0;
}

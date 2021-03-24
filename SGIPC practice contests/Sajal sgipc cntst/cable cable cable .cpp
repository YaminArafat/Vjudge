#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long m,k;
    int n=101;
    while(scanf("%lld %lld",&m,&k)==2)
    {
        //cin>>m>>k;
        cout<<(m-k+1)*k<<endl;
    }
    return 0;
}

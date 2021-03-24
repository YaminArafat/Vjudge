#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int t,i;
    long long int n,m;
    while(1==scanf("%d",&t))
    {
        i=0;
        while(t--){




        scanf("%lld %lld",&n,&m);
        printf("Case %d: %lld\n",++i,(n/2)*m);
    }
    }

    return 0;
}

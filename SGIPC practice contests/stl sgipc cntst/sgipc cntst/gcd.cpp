#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    long long n,i,j,sum;
    while (scanf("%lld",&n)==1 && n)
    {
        sum=0;
        for (i=1; i<n; i++)
        {
            for (j=i+1; j<=n; j++)
            {
                sum+=__gcd(i,j);
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}

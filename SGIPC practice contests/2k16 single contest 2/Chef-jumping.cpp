#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,f=0;
    scanf("%lld",&n);
    if (n%3==0 || ((n-1)%3==0 && n%2))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}

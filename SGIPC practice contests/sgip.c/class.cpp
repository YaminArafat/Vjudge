#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    int a[5];
    int i,sum;

    for (i=1;i<=5;i++)
    {
        scanf("%d" , &a[i-1]);
    }
    printf("%d \n%d\n",a[1],a[4]);

    return 0;
}



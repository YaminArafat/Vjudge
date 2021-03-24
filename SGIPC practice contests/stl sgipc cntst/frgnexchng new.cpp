#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <algorithm>
using namespace std;
int array[500001];
int array2[500001];
int main()
{
    int n,i;
    while (scanf("%d",&n)==1)
    {
        if (n==0)
        {
            break;
        }
        for (i=0; i<n; i++)
        {
            scanf("%d %d",&array[i],&array2[i]);
        }
        sort(array, array+n);
        sort(array2, array2+n);
        int count=1;
        for (i=0; i<n; i++)
        {
            if (array[i]!=array2[i])
            {
                count=0;
                break;
            }
        }
        if (count==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");

        }
        count=0;
    }
    return 0;
}

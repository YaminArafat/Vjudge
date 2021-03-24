#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main()
{
    int n,i,a=0;
    int arr[101];
    while (scanf("%d",&n)==1 && n)
    {
        a=0;
        for (i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        if(arr[0]-0<=200)
        {
            for (i=0; i<n-1; i++)
            {
                if ((arr[i+1]-arr[i])<=200)
                {
                    a=1;
                }
                else
                {
                    a=0;
                    break;
                }
            }
            if(2*(1422-arr[n-1])>200)
            {
                a=0;
            }
        }
        if (a)
        {
            printf("POSSIBLE\n");
        }
        else
        {
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
/*if ((arr[i]-arr[i+1])<=200)
                {
                    a=1;
                }*/

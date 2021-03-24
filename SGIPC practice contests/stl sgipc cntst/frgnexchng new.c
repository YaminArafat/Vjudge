#include <stdio.h>
#include <string.h>
#include <algorithm>
int main()
{
    int n,i,j,count=1,temp;
    while (scanf("%d",&n)==1)
    {
        if (n==0)
        {
            break;
        }
        int array[n];
        int array2[n];
        for (i=0; i<n; i++)
        {
            scanf("%d %d",&array[i],&array2[i]);
        }
        sort(array,array+n);
        sort(array2,array2+n);
        for (i=0; i<n/2; i++)
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
            for (i=n/2; i<n; i++)
            {
                if (array[i]!=array2[i])
                {
                    count=0;
                    break;
                }
            }
            if (count==1)
            {
                printf("YES\n");
            }

            else
            {
                printf("NO\n");
            }
        }
        count=0;
    }
    return 0;
}

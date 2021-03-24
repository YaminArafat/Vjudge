#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,j,f,temp;
    int ar[101];
    while (scanf("%d",&n) && n!=0)
    {
        if (n==0)
        {
            break;
        }
        for (i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }
        for (i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            {
                if (ar[i]>ar[j])
                {
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
        }
        f=1;
        if (((1422-ar[n-1])*2)>200)
        {
            f=0;
        }
        else
        {
            for (i=1; i<n; i++)
            {
                if ((ar[i]-ar[i-1])>200)
                {
                    f=0;
                    break;
                }
            }
        }
        if (f==1)
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

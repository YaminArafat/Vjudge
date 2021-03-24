#include <stdio.h>
int main()
{
    int n,q,i,j,temp,count=0,ntf=0;
    while (scanf("%d %d",&n,&q)==2)
    {
        if (n==0 && q==0)
        {
            break;
        }
        int array1[n];
        int array2[q];
        for (i=0; i<n; i++)
        {
            scanf("%d",&array1[i]);
        }
        for (i=0; i<q; i++)
        {
            scanf("%d",&array2[i]);
        }
        for (i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            {
                if (array1[i]>array1[j])
                {
                    temp=array1[i];
                    array1[i]=array1[j];
                    array1[j]=temp;
                }
            }
        }
        printf("CASE# %d:\n",count+1);
        for (j=0; j<q; j++)
        {
            for (i=0; i<n; i++)
            {
                if (array2[j]!=array1[i])
                {
                    ntf++;
                }
                if (ntf==n)
                {
                    printf("%d not found\n",array2[j]);
                    break;
                }
                else if (array1[i]==array2[j])
                {
                    printf("%d found at %d\n",array2[j],i+1);
                    break;
                }
            }
            ntf=0;
        }
        count++;
    }
    return 0;
}

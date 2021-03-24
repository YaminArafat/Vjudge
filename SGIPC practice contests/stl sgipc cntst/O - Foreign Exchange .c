#include <stdio.h>
int main()
{
    int n,i,j,count=0;
    while (scanf("%d",&n)==1)
    {
        if (n==0)
        {
            break;
        }
        int array[n*2];
        for (i=0; i<n*2; i++)
        {
            scanf("%d",&array[i]);
        }
        for (i=0; i<(n*2)-3; i=i+4)
        {
            if (array[i]==array[i+3])
            {
                count++;
            }
            printf("%d ",array[i]);
        }
        for (i=1; i<(n*2)-2; i=i+4)
        {
            if (array[i]==array[i+1])
            {
                count++;
            }
            printf("%d ",array[i]);
        }
        printf("%d\n",count);
        if (count==n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        count=0;
    }
    return 0;
}


//
/*for (i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            {
                if (array[i]>array[j])
                {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
        for (i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            {
                if (array2[i]>array2[j])
                {
                    temp=array2[i];
                    array2[i]=array2[j];
                    array2[j]=temp;
                }
            }
        }*/


        //
        /*for (i=0; i<n/2; i++)
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
        count=0;*/

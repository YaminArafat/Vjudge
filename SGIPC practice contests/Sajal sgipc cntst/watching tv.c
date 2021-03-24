#include <stdio.h>
int main()
{
    int t,n,i,j,k,x,c=0,temp,max=10000000,y,f=0;
    char str[51];
    int array[100001];
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%d",&n);
        for (j=0;j<n;j++)
        {
            scanf(" %[^\n] %d",str,array[j]);
        }
        for (j=0;j<n;j++)
        {
            for (k=j+1;k<n;k++)
            {
                if (array[j]==array[k])
                {
                    c++;
                    if (c>max)
                    {
                        max=c;
                        y=array[j];
                    }
                }
                else if (array[j]<array[k])
                {
                    f=1;
                    temp=array[j];
                    array[j]=array[k];
                    array[k]=temp;
                }
            }

        }
        if (c>0)
        {
            printf("%d\n",y);
        }
        else if (f=1)
        {
            printf("%d\n",array[j]);
        }
    }
}

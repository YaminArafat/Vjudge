#include <stdio.h>
int main()
{
    int n,i,j,val,temp,k=0;
    while (scanf("%d",&n)==1)
    {
        int array[n];
        if (n==0)
        {
            break;
        }
        for (i=1; i<=n; i++)
        {
            array[i-1]=i;
        }
        for (i=2;i<n;i++)
        {
            //array[i+1]=temp;
            //temp=array[i];
            array[i-2]=array[i];
            //n--;
            //printf("%d ",array[i]);
            //i++;
            //n--;
            array[n-1]=array[i];
        }
        n--;
        for (i=0;i<n;i++)
        {
            printf("%d ",array[i]);
        }
    }
}

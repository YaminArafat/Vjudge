#include <stdio.h>
int main()
{
    int tc,n,sum=0,x=0,val,y,f=0,temp,num,i,add=0;
    scanf("%d",&tc);
    for (i=0; i<tc; i++)
    {
        scanf("%d",&n);
        y=n;
        x++;
        while (n<10)
        {
            n=n*n;
        }
        //sum=n;
        while (sum!=1)
        {
            while (n!=0)
            {
                temp=n;
                num=n%10;
                val=num*num;
                sum=sum+val;
                n=temp/10;
            }

        }
        if (sum==1)
        {
            printf("Case #%d: %d is a Happy number.\n",x,y);
        }
        else
        {
            printf("Case #%d: %d is an Unhappy number.\n",x,y);
        }
    }
    return 0;
}

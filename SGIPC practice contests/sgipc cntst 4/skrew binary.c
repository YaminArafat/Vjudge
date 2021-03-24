#include <stdio.h>
#include <math.h>
#include <strings.h>
int main()
{
    long long int i,num,sum=0,x,pwr,val;
    char array[10001];
    while (scanf("%s",&array))
    {
        if (array[0]=='0'&&array[1]=='\0')
        {
            break;
        }
        else
        {
            x=strlen(array);
            for (i=0; i<strlen(array); i++)
            {
                num=array[i]-48;
                pwr=pow(2,(x-i));
                val=num*(pwr-1);
                sum=sum+val;
            }
            printf("%lld\n",sum);
            sum=0;
        }
    }
    return 0;
}

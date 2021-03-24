#include <stdio.h>
int main()
{
    long long int i,ans,count=0;
    for (i=1;;i++)
    {
        if (((i%2)==0&&(i%3)==0&&(i%5)==0)||((i%3)==0&&(i%5)==0)||((i%2)==0&&(i%3)==0)||((i%2)==0&&(i%5)==0)||((i%2)==0&&(i%3)==0&&(i%5)==0))
        {
            count++;
            if (count==1500)
            {
                ans=i;
                break;
            }
        }
    }
    printf("%lld\n",ans);
    return 0;
}

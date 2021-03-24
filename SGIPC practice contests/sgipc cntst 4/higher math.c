#include <stdio.h>
int main()
{
    int tc,a,b,c,i;
    scanf("%d",&tc);
    for (i=0; i<tc; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if ((a>b||b>a)&&(c>a&&c>b))
        {
            if ((a*a+b*b)==c*c)
            {
                printf("Case %d: yes\n",i+1);
            }
            else
            {
                printf("Case %d: no\n",i+1);
            }
        }
        else if ((a>c||c>a)&&(b>a&&b>c))
        {
            if ((a*a+c*c)==b*b)
            {
                printf("Case %d: yes\n",i+1);
            }
            else
            {
                printf("Case %d: no\n",i+1);
            }
        }
        else if ((b>c||c>b)&&(a>b&&a>c))
        {
            if ((b*b+c*c)==a*a)
            {
                printf("Case %d: yes\n",i+1);
            }
            else
            {
                printf("Case %d: no\n",i+1);
            }
        }
    }
    return 0;
}

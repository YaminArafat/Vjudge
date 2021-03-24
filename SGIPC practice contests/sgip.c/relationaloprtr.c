#include <stdio.h>

int main()
{
    int t,a,b,i;

    scanf("%d", &t);
    if (t<15)
    {
        for (i=1; i<=t; i++)
        {
            scanf("%d %d", &a, &b);
            if (a<1000000001 && b<1000000001)
            {

                if (a<b)
                {
                    printf("<\n");
                }
                if (a>b)
                {
                    printf(">\n");
                }
                if (a==b)
                {
                    printf("=");
                }
            }
        }
    }
    return 0;
}

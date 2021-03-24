#include <stdio.h>
int main()
{
    int tc,i;
    double r,pi=3.1415926535897932384626433832795,ans,sq_area,cr_area;
    scanf("%d",&tc);
    for (i=0; i<tc; i++)
    {
        scanf("%lf",&r);
        sq_area=(4*r*r);
        cr_area=pi*(r*r);
        ans=sq_area-cr_area;
        printf("Case %d: %.2lf\n",i+1,ans);
    }
    return 0;
}

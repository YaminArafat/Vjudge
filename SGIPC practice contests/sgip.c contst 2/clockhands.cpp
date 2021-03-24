#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int H,M;
    double ang_h,ans,ang_m,total_angl;
    while (scanf("%d:%d",&H,&M)==2)
    {
        if (H==0 && M==0)
        {
            break;
        }
        else
        {
            ang_h=H*30+M/2;
            ang_m=(M*6);
            total_angl=(ang_h-ang_m);
            if (total_angl<0)
            {
                total_angl=total_angl*-1;
            }
            if (total_angl>180)
            {
                total_angl=360-total_angl;
            }
            else
            {
                total_angl=total_angl;
            }
            printf("%.3f\n",total_angl);
        }
    }
    return 0;
}
/*ang_h=H*30+M/2;
            ang_m=(M*6);
            total_angl=(ang_h-ang_m);
            if (total_angl<0)
            {
                total_angl=total_angl*-1;
            }
            if (total_angl>180)
            {
                total_angl=360-total_angl;
            }
            else
            {
                total_angl=total_angl;
            }*/

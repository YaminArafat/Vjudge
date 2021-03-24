#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int t,i,c,f;
    float C,F,total;
    cin>>t;
    for (i=0;i<t;i++)
    {
        cin>>c>>f;
        F=(9*c*1.0)/5+32;
        total=f*1.0+F;
        C=(5*(total-32))/9;
        printf("Case %d: %.2f\n",i+1,C);
    }
    return 0;
}

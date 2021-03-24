#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int T,i;
    int a,b,c;
    scanf("%d",&T);
    //if (T<20)
    //{
        for (i=0;i<T;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            //if (a>=1000 && a<=10000 && b>=1000 && b<=10000 && c>=1000 && c<=10000)
            //{
                if ((a>b && a>c && b<c) || (b>a && b>c && a<c))
                //{
                    printf("Case %d: %d\n", i+1,c);
                //}
                if ((c>a && c>b && a<b) || (a>b && a>c && c<b))
                //{
                    printf("Case %d: %d\n", i+1,b);

                //}
                if ((b>c && b>a && c<a) || (c>b && c>a && b<a))
                //{
                    printf("Case %d: %d\n", i+1,a);
                //}
           // }

        }
    //}
    return 0;
}

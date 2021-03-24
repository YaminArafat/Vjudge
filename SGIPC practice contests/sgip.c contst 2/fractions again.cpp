#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int n,a=0,b,c,d,i,j;
    while (scanf("%d",&n)!=EOF)
    {
        a=0;
        for (i=n+1; i<=2*n; i++)
        {
            if ((i*n)%(i-n)==0)
            {
                a++;
            }
        }
        cout<<a<<endl;
        for (i=(n+1); i<=2*n; i++)
        {
            if ((i*n)%(i-n)==0)
            {

                cout<<"1/"<<n<<" = "<<"1/"<<(i*n)/(i-n)<<" + "<<"1/"<<i<<endl;
            }
        }
    }
    return 0;
}

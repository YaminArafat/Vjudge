#include <iostream>
using namespace std;
int main()
{
    int t,a,b,i;
    cin>>t;
    if (t<15)
    {
        for (i=1; i<=t; i++)
        {
            cin>>a>>b;
            if (a<1000000001 && b<1000000001)
            {
                if (a<b)
                {
                    cout<<"<\n";
                }
                if (a>b)
                {
                    cout<<">\n";
                }
                if (a==b)
                {
                    cout<<"=\n";
                }
            }
        }
    }
    return 0;
}

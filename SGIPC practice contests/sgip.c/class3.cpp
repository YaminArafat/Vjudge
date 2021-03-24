#include <iostream>
using namespace std;

int main()
{
    int n,space;
    cin>>n;

    for (int i=1;i<=n-1;i++)
    {
        cout<<"  ";
        for (int j=1;j<=space;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}

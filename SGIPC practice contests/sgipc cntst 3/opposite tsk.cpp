#include <iostream>
using namespace std;
int main()
{
    int tc,n,i;
    cin>>tc;
    for (i=0;i<tc;i++)
    {
        cin>>n;
        if (n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
        }
        else
        {
            cout<<(n/2)+1<<" "<<n/2<<endl;
        }
    }
    return 0;
}


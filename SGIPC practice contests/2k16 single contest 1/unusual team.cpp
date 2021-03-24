#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>=b)
        {
            cout<<"FunkyMonkeys"<<endl;
        }
        else
        {
            cout<<"WeWillEatYou"<<endl;
        }
    }
    return 0;
}

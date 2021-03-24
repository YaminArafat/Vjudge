#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[101];
    cin>>str;
    int i,f=1;
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            cout<<"YES"<<endl;
            f=0;
            break;
        }
    }
    if(f)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

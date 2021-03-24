#include<iostream>
#include<algorithm>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
    map <string,int>mp;
    int n,i = 0 , j;
    scanf("%d",&n);
    while(i<n)
    {
        string str;
        cin>>str;
        ++mp[str];
        if(mp[str]==1)
        cout<<"OK"<<endl;
        else
        {
           cout<<str<<mp[str]-1<<endl;
        }

        i++;

    }


}


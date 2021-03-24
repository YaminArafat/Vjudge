#include <bits/stdc++.h>
using namespace std;
bool st[10000];
int main()
{
    long long int i,j,count=0,m=0;
    string str;
    scanf(" %[^\n]",str);
    //getline(cin,str);
    for(i=0; i<str.length(); i+=2)
    {
        if (st[i]==0)
        {
            for(j=i; j<m; j+=2)
            {
                if(str[i]==str[j])
                {
                   count++;
                   st[j]=1;
                }
            }
            printf("%d %d\n",str[i],count);
            count=0;
        }
    }
    return 0;
}

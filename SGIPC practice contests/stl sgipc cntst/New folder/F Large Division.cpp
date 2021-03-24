#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j=0,num;
    long long m;
    scanf("%lld",&t);
    string s;
    while (t--)
    {
        i=0;
        cin>>s;
        scanf("%lld",&m);
        if(s[i]=='-')
        {
            i++;
        }
        num=0;
        for(;i<s.size();i++)
        {
            num=(num*10)+s[i]-'0';
            num%=m;
        }
        if(!num)
        {
            printf("Case %lld: divisible\n",++j);
        }
        else
        {
            printf("Case %lld: not divisible\n",++j);
        }
    }
    return 0;
}

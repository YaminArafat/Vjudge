#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string s;
    scanf("%d",&n);
    while(n--)
    {
        cin>>s;
        int m=a=r=g=i=t=x=count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='M')
            {
                m++;
            }
            else if (s[i]=='A')
            {
                a++;
            }
            else if (s[i]=='R')
            {
                r++;
            }
            else if (s[i]=='G')
            {
                g++;
            }
            else if (s[i]=='I')
            {
                i++;
            }
            else if (s[i]=='T')
            {
                t++;
            }
        }
        a/=3;
        r/=2;
        x=min(min(min(min(min(a,r),m),g),i),t);
        printf("%d\n",x);
    }
    return 0;
}

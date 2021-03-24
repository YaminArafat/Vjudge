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
        int m,a,r,g,I,t,x,count;
        m=a=r=g=I=t=x=count=0;
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
                I++;
            }
            else if (s[i]=='T')
            {
                t++;
            }
        }
        a/=3;
        r/=2;
        //cout<<I<<endl;
        //cout<<a<<" "<<r<<endl;
        //x=min(min(min(min(a,r),m),g),I);
        x=min(min(min(min(min(a,r),m),g),I),t);
        printf("%d\n",x);
    }
    return 0;
}

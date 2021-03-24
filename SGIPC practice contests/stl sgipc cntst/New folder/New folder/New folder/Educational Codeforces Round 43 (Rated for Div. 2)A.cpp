#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string str,ans;
    cin>>str;
    /*if(str.size()==1)
    {
        cout<<str<<endl;
        return 0;
    }*/
    //for(int i=0;i<str.size();i++)
    //{
        if(str[0]-'0'==1)
        {
            ans.append("1");
            //break;
        }

    //}
    for(int i=0;i<str.size();i++)
    {
        if(str[i]-'0'==0)
        {
            ans.append("0");
        }

    }
    //if(count)
    cout<<ans<<endl;
   // else
       // cout<<1<<endl;
    return 0;
}
/*for(int i=0;i<str.size();i++)
    {
        for(int j=i+1;j<str.size();j++)
        {
            if(str[i]-'0'!=str[j]-'0')
            {
                swap(str[i],str[j]);
            }
            if(str[i]-'0'==1 && str[i]-'0'==str[j]-'0')
            {
                str.erase(str.begin()+j);
            }
        }
    }*/

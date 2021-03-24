#include <bits/stdc++.h>
using namespace std;
bool flag2[100000];
//map<string,bool>mp2;
int main()
{
    int n,ans=0;
    //cout<<'a'-0<<endl;
    scanf("%d",&n);
    string str;
    //vector<string>vec;
    map<string,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        sort(str.begin(),str.end());
        mp[str]++;
        //vec.push_back(str);
    }
    //sort(mp.begin(),mp.end());
    for(map<string,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
    {
        string temp=it->first;
        int i=0,cnt=0;
        while(i<temp.size()-1)
        {
            if(temp[i]==temp[i+1])
            {
                cnt++;
            }
            else
            {
                break;
            }
            i++;
        }
        if(cnt==temp.size()-1)
        {
            temp.erase(temp.begin()+1,temp.end());
        }
        if(temp.size()==1)
        {
            if(!flag2[temp[0]-0])
            {
                ans++;
                flag2[temp[0]-0]=1;
            }
        }
        else
        {
            i=0;
            cnt=0;
            bool flag[500]= {0};
            while(temp[i]!='\0')
            {
                if(!flag[temp[i]-0])
                {
                    flag[temp[i]-0]=1;
                    cnt++;
                }
                else
                {
                    break;
                }
                i++;
            }
            if(cnt==temp.size())
            {
                ans++;
                //mp2[temp]=1;
                //if(cnt==1)
                //flag2[temp[0]-0]=1;
            }
        }
        /*else if(cnt==1)
        {
            //string tmp=NULL;
            //char s=temp[0];
            //tmp.append(s);
            if(!flag2[temp[0]-0])
                ans++;
        }*/
        //cout<<temp<<" "<<cnt<<endl;
    }
    if(!ans)
    ans++;
    printf("%d\n",ans);
    /*for(int i=0;i<n;i++)
    {
        sort(vec[i].begin(),vec[i].end());
    }*/

    return 0;
}
/*getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
        while(str[i]!=' ')
        {
            if(!flag[str[i]-'0'])
            {
                flag[]
            }
        }

    }*/

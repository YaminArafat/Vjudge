#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long int l,u,t,n,i,j,count=1,divisor=1,temp,c;
    vector<long long int>divcount;
    while (cin>>t)
    {
        while (t--)
        {
            cin>>l>>u;
            for(i=l;i<=u;i++)
            {
                count=0;
                for (j=1;j*j<=i;j++)
                {
                    if (j*j==i)
                    {
                        count++;
                    }
                    else if (i%j==0)
                    {
                        count+=2;
                    }
                }
                divcount.push_back(count);
                //cout<<count<<endl;
            }
            //std::sort(divcount.begin(),divcount.end(),greater<int>());
            temp=*max_element(divcount.begin(),divcount.end());
             //divcount.clear();
            /*while(!divcount.empty())
            {
                cout<<divcount.back()<<" "<<endl;
                divcount.pop_back();
            }*/
            for(i=l;i<=u;i++)
            {
                count=0;
                for (j=1;j*j<=i;j++)
                {
                    if (j*j==i)
                    {
                        count++;
                    }
                    else if (i%j==0)
                    {
                        count+=2;
                    }
                }
                if (count==temp)
                {
                    c=i;
                    break;
                }
            }
            cout<<"Between "<<l<<" and "<<u<<", "<<c<<" has a maximum of "<<temp<<" divisors."<<endl;

        }
    }
    return 0;
}

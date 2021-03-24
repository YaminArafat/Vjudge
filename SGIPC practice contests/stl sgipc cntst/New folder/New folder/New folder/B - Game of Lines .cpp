#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    while(scanf("%d",&n)==1 && n)
    {
        pair<int,int>p[n];
        //map<double,int>mp;
        set<double>mp;
        for (int i=0; i<n; i++)
        {
            scanf("%d %d",&p[i].first,&p[i].second);
        }
        int f=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int koti=p[j].second-p[i].second;
                int vuj=p[j].first-p[i].first;
                double d=(double)koti/(double)vuj;
                //cout<<d<<endl;
                if(vuj)//{
                    //mp[d]++;
                    mp.insert(d);
                    else
                        f=1;
                    //mp.insert(d);
                    //cout<<"h"<<endl;
                //}
            }
        }
        printf("%d\n",mp.size()+f);
    }
    return 0;
}
/*cout<<koti<<" "<<vuj<<endl;printf("%lf\n",d);
                //cout<<(double)d<<endl;d=1000+d;
                if(!koti && !flag[d])
                {
                    cnt++;
                    flag[d]=1;
                }
                else if(!flag[d])
                {
                    cnt++;
                    flag[d]=1;
                }*/

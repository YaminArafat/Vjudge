#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    long long int n1,n2,n,i,x,count=0;
    float sum=0.0;
    vector<long long int>store;
    while(scanf("%lld %lld %lld",&n1,&n2,&n)==3)
    {
        if(n1==0&&n2==0&&n==0)
        {
            break;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cin>>x;
                store.push_back(x);
            }
            sort(store.begin(),store.end());
            /*while(n1--)
            {
                store.pop_back();
            }
            sort(store.begin(),store.end(),greater<int>());
            while(n2--)
            {
                store.pop_back();
            }*/
            /*while(!store.empty())
            {
                cout<<store.back()<<" ";
                store.pop_back();
            }
            cout<<endl;
            for(i=0;i<n;i++)
            {
                cout<<store[i]<<" ";
            }*/
            for(i=n2;i<n-n1;i++)
            {
                sum=sum+(float)store[i];
            }
            /*while(!store.empty())
            {
                sum=sum+store.back();
            }*/
            sum=sum/(n-(n1+n2));
            printf("%f\n",sum);
            sum=0;
            store.clear();
        }
    }
    return 0;
}

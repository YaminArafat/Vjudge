#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long int t,n,i,j,count=1,divisor=1,temp,c=0,lendiv;
    vector<long long int>divcount;
    vector<long long int>num;
    for(i=1; i<=1000; i++)
    {
        count=0;
        for (j=1; j*j<=i; j++)
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
        num.push_back(i);
    }
    lendiv=divcount.size();
    for(i=0; i<lendiv-1; i++)
    {
        for (j=i+1; j<lendiv; j++)
        {
            if ((divcount[i]>divcount[j])||((divcount[i]==divcount[j])&&num[i]<num[j]))
            {
                temp=divcount[i];
                divcount[i]=divcount[j];
                divcount[j]=temp;
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    cin>>t;
    while(t--)
    {
        c++;
        cin>>n;
        /*while(!divcount.empty())
        {
            cout<<num.back()<<" "<<divcount.back()<<" "<<endl;
            divcount.pop_back();
            num.pop_back();
        }*/

        /*for (i=0; i<lendiv; i++)
        {
            cout<<num[i]<<" = "<<divcount[i]<<endl;
            count++;
        }*/
        //cout<<count<<endl;
        /*for (i=0;i<lendiv;i++)
        {
            if()
        }*/
        cout<<"Case "<<c<<": "<<num[n-1]<<endl;
    }
    return 0;
}


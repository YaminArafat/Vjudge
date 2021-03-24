#include <bits/stdc++.h>
#define mx 46345
using namespace std;
bool flag[mx+5];
vector<int>vec;
void seive()
{
    for(int i=3; i*i<=mx; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<=mx; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    vec.push_back(2);
    for(long long i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    seive();
    long long n;
    while(scanf("%lld",&n)==1 && n!=EOF)
    {
        if(n<mx && n%2 && !flag[n])
        {
            printf("0\n");
        }
        else
        {
            long long div=1,euler=n,ans=n;
            for(int i=0; i<vec.size() && (vec[i]*vec[i]<=n); i++)
            {
                if(n%vec[i]==0)
                {
                    int cnt=1;
                    while(n%vec[i]==0)
                    {
                        n/=vec[i];
                        cnt++;
                    }
                    div*=cnt;
                    //cout<<vec[i]<<" "<<cnt<<" "<<div<<endl;
                    euler/=vec[i];
                    euler*=vec[i]-1;
                }
            }
            if(n>1)
            {
                div*=2;
                //cout<<n<<" "<<2<<" "<<div<<endl;
                euler/=n;
                euler*=n-1;
            }
            //div-=2;
            euler--;
            //cout<<euler<<endl;
            ans-=(div+euler);
            printf("%lld\n",ans);
        }
    }
    return 0;
}

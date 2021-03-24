#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    vector<long long>vec;
    while(1)
    {
        while(1)
        {
            scanf("%lld",&x);
            if(x!=0)
            {
                vec.push_back(x);
            }
            else
            {
                break;
            }
        }
        if(!vec.size())
        {
            break;
        }
        else
        {
            long long gcd;
            if(vec.size()>2)
            {
                gcd=__gcd(abs(vec[0]-vec[1]),abs(vec[1]-vec[2]));
                for(int i=2; i<vec.size()-1; i++)
                {
                    gcd=__gcd(gcd,abs(vec[i]-vec[i+1]));
                }
            }
            else
            {
                gcd=abs(vec[0]-vec[1]);
            }
            printf("%lld\n",gcd);
            vec.clear();
        }
    }
    return 0;
}

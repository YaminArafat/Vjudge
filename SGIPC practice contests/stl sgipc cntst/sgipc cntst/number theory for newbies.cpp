#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    long long int num,temp,i,len,sumA=0,sumB=0,m=1,var;
    vector<long long int>digit;
    while (cin>>num)
    {
        m=1;
        while (num!=0)
        {
            temp=num%10;
            digit.push_back(temp);
            num/=10;
        }
        len=digit.size();
        sort(digit.begin(),digit.end(),greater<long long int>());
        for(i=len-1; i>=0; i--)
        {
            var=m*digit[i];
            sumA+=var;
            m*=10;
        }
        m=1;
        for(i=0; i<len; i++)
        {
            var=m*digit[i];
            sumB+=var;
            m*=10;
        }
        cout<<sumA<<" - "<<sumB<<" = "<<sumA-sumB<<" = 9 * "<<(sumA-sumB)/9<<endl;
        sumA=0;
        sumB=0;
        digit.clear();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int divisor(int x)
{
    int a;
    for(int i=2;i<a;i++) {
        if(a%i==0) break;
    }
    return i;
}

int prime(int y)
{
    int b;
    int c=0;
    for(int i=2;i<b;i++) {
        if(b%i!=0) c++;
    }
    if(c==(b-2)) return 1;
}
int main()
{
    int n;
    cin>>n;
    while(prime(n)!=1) {
        n=n
    }
}

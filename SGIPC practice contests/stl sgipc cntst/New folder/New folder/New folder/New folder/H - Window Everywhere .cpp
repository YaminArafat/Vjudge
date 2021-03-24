#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
//#include <vector>
using namespace std;
#define max_value 1000000
#define min_value -1000000
//vector<int>input,dupl;
int input[1000009],dupl[1000009],segTree[4000040],segTree2[4000040];
void constructTree1(int input[],int segTree[],int low, int high, int pos)
{
    if(low==high)
    {
        segTree[pos]=input[low];
        return;
    }
    int mid = (low+high)/2;
    constructTree1(input,segTree,low,mid,2*pos+1);
    constructTree1(input,segTree,mid+1,high,2*pos+2);
    segTree[pos]=min(segTree[2*pos+1],segTree[2*pos+2]);
}
void constructTree2(int dupl[],int segTree2[],int low, int high, int pos)
{
    if(low==high)
    {
        segTree2[pos]=dupl[low];
        return;
    }
    int mid = (low+high)/2;
    constructTree2(dupl,segTree2,low,mid,2*pos+1);
    constructTree2(dupl,segTree2,mid+1,high,2*pos+2);
    segTree2[pos]=max(segTree2[2*pos+1],segTree2[2*pos+2]);
}
int rangmin(int segTree[],int qlow,int qhigh, int low, int high, int pos)
{
    if(qlow<=low && qhigh>=high)
    {
        return segTree[pos];
    }
    if(qlow>high || qhigh<low)
    {
        return max_value;
    }
    int mid=(low+high)/2;
    return min(rangmin(segTree,qlow,qhigh,low,mid,2*pos+1),rangmin(segTree,qlow,qhigh,mid+1,high,2*pos+2));
}
int rangmax(int segTree2[],int qlow,int qhigh, int low, int high, int pos)
{
    if(qlow<=low && qhigh>=high)
    {
        return segTree2[pos];
    }
    if(qlow>high || qhigh<low)
    {
        return min_value;
    }
    int mid=(low+high)/2;
    return max(rangmax(segTree2,qlow,qhigh,low,mid,2*pos+1),rangmax(segTree2,qlow,qhigh,mid+1,high,2*pos+2));
}
int main()
{
    int x,n,k,start,end,minValue,maxValue;
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&input[i]);
        dupl[i]=input[i];
        //input.push_back(x);
    }
    //vector<int>segTree(4*n,max_value);
    //memset(segTree,max_value,sizeof(segTree));
    //dupl=input;
    constructTree1(input,segTree,0,n-1,0);
    start=0;
    end=k-1;
    while(end<n)
    {
        minValue=rangmin(segTree,start,end,0,n-1,0);
        printf("%d",minValue);
        if(end<n-1)
        {
            printf(" ");
        }
        start++;
        end++;
    }
    printf("\n");
    //segTree.clear();
    //vector<int>segTree2(4*n,min_value);
    constructTree2(dupl,segTree2,0,n-1,0);
    start=0;
    end=k-1;
    while(end<n)
    {
        maxValue=rangmax(segTree2,start,end,0,n-1,0);
        printf("%d",maxValue);
        if(end<n-1)
        {
            printf(" ");
        }
        start++;
        end++;
    }
    printf("\n");
    return 0;
}

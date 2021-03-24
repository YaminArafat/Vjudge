#include<bits/stdc++.h>
using namespace std ;
class node
{
public :
    int info ;
    node *link ;

};
node *head=NULL ,*temp,*srt ;
void creation(int data)
{
    node *ptr ;
    ptr=new node () ;
    ptr ->info =data ;
    ptr->link =NULL ;
    if (head ==NULL)
    {
        head =ptr ;
        temp=ptr ;
    }
    else
    {
        temp->link =ptr ;
        temp=ptr ;
    }
}
int traverse (  )
{
    node *srt ;
    for (srt=head ; ;srt=srt->link)
    {
        cout<<srt->info<<endl;
        if (srt->link ==NULL)
        {
            break;
        }

    }
}
int main()
{
    int n,i,j,k ,item;
    cout<<"Enter Element number "<<endl;
    cin>>n ;
    for (i=0 ;i<n;i++)
    {
        cin>>item ;
        creation(item) ;
    }
    traverse() ;

}

#include <iostream>
using namespace std;
int main()
{
    int tc,m_pos,l_pos,i,t_tym,f_dif,t_tym1,t_tym2;
    cin>>tc;
    for (i=0; i<tc; i++)
    {
        cin>>m_pos>>l_pos;
        if (m_pos<l_pos)
        {
            t_tym=4*l_pos+3*3+2*5;
            cout<<"Case "<<i+1<<": "<<t_tym<<endl;;
        }
        else if (m_pos>l_pos)
        {
            f_dif=m_pos-l_pos;
            t_tym1=4*f_dif+5+3*2;
            t_tym2=t_tym1+m_pos*4+3+5;
            cout<<"Case "<<i+1<<": "<<t_tym2<<endl;
        }
        else if (m_pos==l_pos)
        {
            t_tym=3*3+5*2+m_pos*4;
            cout<<"Case "<<i+1<<": "<<t_tym<<endl;
        }
    }
    return 0;
}

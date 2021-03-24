#include<bits/stdc++.h>
using namespace std;
int dx[]= {-1,-1,+1,+1,-2,-2,+2,+2};
int dy[]= {+2,-2,+2,-2,+1,-1,+1,-1};
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int tc,i,m,n,ans;
    scanf("%d",&tc);
    for (i=0; i<tc; i++)
    {
        scanf("%d %d",&m,&n);
        if (m==1||n==1)
        {
            ans=m*n;
        }
        else if(m==1&&n==1)
            ans=2;
        else if(n==2 && m==2)
            ans=4;
        else if(n==2||m==2)
        {
            ans=0;
            if(m==2)
            {
                m=n;
                n=2;
            }
            bool board[m+2][n+2];
            memset(board,0,sizeof(board));
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(!board[i][j])
                    {
                        //cout<<i<<" "<<j<<endl;
                        for(int k=0; k<8; k++)
                        {
                            int tx=i+dx[k];
                            int ty=j+dy[k];
                            if(tx>=0 && tx<m && ty>=0 && ty<n && !board[tx][ty])
                            {
                                board[tx][ty]=1;
                            }
                        }
                    }
                }
            }
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<n; j++)
                {
                    //cout<<board[i][j]<<" ";
                    if(!board[i][j])
                        ans++;
                }
               // cout<<endl;
            }
        }
        else
        {
            ans=((m*n)+1)/2;
        }
        printf("Case %d: %d\n",i+1,ans);
    }
    return 0;
}

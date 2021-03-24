#include<bits/stdc++.h>
int dx[]= {-1,-1,+1,+1,-2,-2,+2,+2};
int dy[]= {+2,-2,+2,-2,+1,-1,+1,-1};
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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
            bool board[n+2][m+2];
            memset(board,0,sizeof(board));
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(!board[i][j])
                    {
                        board[i][j]=1;
                        for(int k=0; k<8; k++)
                        {
                            int tx=i+dx[k];
                            int ty=j+dy[k];
                            if(tx>=0 && tx<n && ty>=0 && ty<m && !board[tx][ty])
                            {
                                board[tx][ty]=1;
                            }
                        }
                    }
                }
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

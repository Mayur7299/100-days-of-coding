#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int path(int r,int c,int n,int m)
{
    if((r==n-1)&&(c==m-1))
    {
        return 1;
    }
    if(r>=n || c>=m)
    {
        return 0;
    }
    if(dp[r][c]!=-1)
    {
        return dp[r][c];
    }
    int down=path(r+1,c,n,m);
    int right=path(r,c+1,n,m);
    return dp[r][c] = down + right;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n = 3; 
    int m = 3;
    cout << path(0,0,n,m);
}
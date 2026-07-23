#include<bits/stdc++.h>
using namespace std;
int a[105][105],dp[105][105];
int w[105],v[105];
int main(){
    int n,m;
    cin>>n>>m;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j>=w[i]) dp[i][j]=max(dp[i-1][j],v[i]+dp[i-1][j-w[i]]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][m];
}

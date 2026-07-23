#include<bits/stdc++.h>
using namespace std;
int tx[5]={0,-1,0,1,0};
int ty[5]={0,0,1,0,-1};
bool c[105][105]={false};
int ans=0,n,m,a[105][105];
void dfs(int x,int y){
    if(x==n&&y==m) { ans++; return; }
    for(int i=2;i<=3;i++){
        int nx=x+tx[i];
        int ny=y+ty[i];
        if(1<=nx&&nx<=n&&1<=ny&&ny<=m&&!c[nx][ny]&&a[nx][ny]==0){
            c[nx][ny]=true;
            dfs(nx,ny);
            c[nx][ny]=false;
        }
    }
    return;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    c[1][1]=true;
    dfs(1,1);
    cout<<ans;
}

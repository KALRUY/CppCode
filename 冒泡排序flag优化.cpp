#include<bits/stdc++.h>
using namespace std;
int n,a[10];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=1;i--){
        bool flag=false;
        for(int j=1;j<=i;j++){
            if(a[j]>a[j+1]) { flag=true; swap(a[j+1],a[j]); }
        }
        if(flag==false) break;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}
//Time complexity: best: O(n), worst:O(n^2). Stability:Stable

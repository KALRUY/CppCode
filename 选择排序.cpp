#include<bits/stdc++.h>
using namespace std;
int n,a[11];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(a[j]<a[i]){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}
//Time complexity: best&worst: O(n^2), Stability: Unstable.
//Test: 24ms,788kb

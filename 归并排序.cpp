#include <iostream>
using namespace std;
int n,a[10],c[10];
void solve(int l,int r){
    if(l==r) return;
    if(r-l==1){
        if(a[r]<a[l]) swap(a[r],a[l]);
        return;
    }
    int mid=(l+r+2)/2;
    solve(l,mid-1);
    solve(mid,r);
    int i=l,j=mid,k=l;
    while(i<=mid-1&&j<=r){
        if(a[i]<a[j]) c[k++]=a[i++];
        else c[k++]=a[j++];
    }
    while(i<=mid-1) c[k++]=a[i++];
    while(j<=r) c[k++]=a[j++];
    for(int p=l;p<=r;p++){
        a[p]=c[p];
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    solve(1,n);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
	return 0;
}
//i,j are left and right pointers. Time Complexity: O[nlog2(n)]. Stability: Stable.

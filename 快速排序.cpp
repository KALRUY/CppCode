#include<bits/stdc++.h>
using namespace std;
int n,a[11];
void qsort(int l,int r){
    if(l>=r) return;
    int pos=l+rand()%(r-l+1);
    int pivot=a[pos];
    int i=l,j=r;
    while(i<=j){
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    qsort(l,j);
    qsort(i,r);
}
int main(){
    srand(time(0));
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    qsort(1,n);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}
//Time complexity: best: O[nlog2(n)], worst: O(n^2). Stability: Unstable
//Test:24ms,788kb

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<int> a(n), b(m), c(n+m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    int l=0, r=0, k=0; 
    while(l<n && r<m){
        if(a[l]<b[r]){
            c[k] = a[l];
            l++;
        }
        else{
            c[k] = b[r];
            r++;
        }
        k++;
    }
    while(l<n){
        c[k] = a[l];
        l++;
        k++;
    }
    while(r<m){
        c[k] = b[r];
        r++;
        k++;
    }
    for(int i=0; i<n+m; i++){
        cout<<c[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
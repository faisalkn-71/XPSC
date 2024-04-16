#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int MSB(int x){
    return (int)log2(x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ht = log2(n-1);
        int start = 1<<ht;
        for(int i=n-1; i>=start; i--) cout<<i<<" ";
        for(int i=0; i<start; i++) cout<<i<<" ";
        cout<<endl; 
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int findDivisor(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return i;
    }
    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        if(l<=3 && r<=3){
            cout<<-1<<endl;
            continue;
        }
        if(r-l >= 1){
            if(r%2) r--;
            cout<<r/2<<" "<<r/2<<endl;
            continue;
        }
        if(findDivisor(l)==l){
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<findDivisor(l)<<" "<<l-findDivisor(l)<<endl;
        }
    }

    return 0;
}
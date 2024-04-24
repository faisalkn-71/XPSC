#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;
    vector<int> ara(n);
    for(int i=0; i<n; i++){
        cin>>ara[i];
    }
    while(k--){
        int x; cin>>x;
        int l=0, r=n-1, mid, ans=-1;
        while(l<=r){
            mid = (l+r)/2;
            if(x==ara[mid]){
                ans = mid;
                break;
            }
            else if(x<ara[mid]) r = mid-1;
            else l = mid+1;
        }
        (ans == -1) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }

    return 0;
}
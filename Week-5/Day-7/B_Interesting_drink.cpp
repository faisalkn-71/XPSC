#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int ara[n];
    for(int i=0; i<n; i++){
        cin>>ara[i];
    }

    sort(ara, ara+n);
    int q;
    cin>>q;
    while(q--){
        int x; cin>>x;
        auto it = upper_bound(ara, ara+n, x);
        cout<<it-ara<<endl;
    }

    return 0;
}
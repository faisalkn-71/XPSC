#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin>>n>>q;

    vector<int> ara(n);
    for(int i=0; i<n; i++){
        cin>>ara[i];
    }

    vector<int> freq(n, 0);
    for(int i=0; i<q; i++){
        int l, r;
        cin>>l>>r;
        freq[l-1]++;
        if(r<n) freq[r]--;
    }

    for(int i=1; i<n; i++){
        freq[i] += freq[i-1];
    }

    sort(ara.begin(), ara.end(), greater<int>());
    sort(freq.begin(), freq.end(), greater<int>());

    ll maxx = 0;
    for(int i=0; i<n; i++){
        maxx += static_cast<ll>(ara[i]) * freq[i];
    }

    cout<<maxx<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

ll numberInSpiral(ll y, ll x) {
    ll layer = max(y, x);
    ll layer_max = layer * layer;
    
    if (layer % 2 == 0) {
        if (y == layer) {
            return layer_max - (x - 1);
        } else {
            return layer_max - (layer - 1) - (layer - y);
        }
    } else {
        if (x == layer) {
            return layer_max - (y - 1);
        } else {
            return layer_max - (layer - 1) - (layer - x);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x;
        cout << numberInSpiral(y, x) << endl;
    }
    

    return 0;
}

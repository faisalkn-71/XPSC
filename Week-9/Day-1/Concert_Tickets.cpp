#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> h;
    while(n--) {
        int x;
        cin >> x;
        h.insert(x);
    }

    while(m--) {
        int t;
        cin >> t;
        auto it = h.lower_bound(t);
        if(it != h.end()) {
            cout << *it << "\n";
            h.erase(it);
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}

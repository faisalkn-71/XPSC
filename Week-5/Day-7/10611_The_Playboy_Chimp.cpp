#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0; i<n; i++)
        cin >> h[i];

    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        auto taller = upper_bound(h.begin(), h.end(), x);
        auto shorter = lower_bound(h.begin(), h.end(), x);
        if(shorter == h.begin())
            cout << "X ";
        else
            cout << *(--shorter) << " ";
        if(taller == h.end())
            cout << "X\n";
        else
            cout << *taller << "\n";
    }

    return 0;
}

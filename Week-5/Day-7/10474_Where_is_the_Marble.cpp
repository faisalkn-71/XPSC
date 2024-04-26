#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, caseNo = 0;
    while(cin >> n >> q) {
        if(n == 0 && q == 0)
            break;

        vector<int> marbles(n);
        for(int i=0; i<n; i++)
            cin >> marbles[i];

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << ++caseNo << ":\n";
        while(q--) {
            int x;
            cin >> x;
            auto it = lower_bound(marbles.begin(), marbles.end(), x);
            if(it == marbles.end() || *it != x)
                cout << x << " not found\n";
            else
                cout << x << " found at " << it - marbles.begin() + 1 << "\n";
        }
    }

    return 0;
}

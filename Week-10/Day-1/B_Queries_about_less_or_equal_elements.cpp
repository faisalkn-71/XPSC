#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());

    for(int i=0; i<m; i++) {
        int count = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << count << " ";
    }

    return 0;
}

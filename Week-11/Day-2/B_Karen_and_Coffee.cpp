#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
const int MAX_TEMPERATURE = 200000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> temperature_count(MAX_TEMPERATURE + 2, 0);

    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        temperature_count[l]++;
        if (r + 1 <= MAX_TEMPERATURE) {
            temperature_count[r + 1]--;
        }
    }

    for (int i = 1; i <= MAX_TEMPERATURE; ++i) {
        temperature_count[i] += temperature_count[i - 1];
    }

    vector<int> admissible_count(MAX_TEMPERATURE + 1, 0);
    for (int i = 1; i <= MAX_TEMPERATURE; ++i) {
        if (temperature_count[i] >= k) {
            admissible_count[i] = 1;
        }
    }

    for (int i = 1; i <= MAX_TEMPERATURE; ++i) {
        admissible_count[i] += admissible_count[i - 1];
    }

    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout << admissible_count[b] - admissible_count[a - 1] << "\n";
    }

    return 0;
}

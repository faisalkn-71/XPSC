#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> smallest_prime(1001, 0);
    vector<int> color(1001, 0);
    int color_count = 0;

    for (int i = 2; i <= 1000; ++i) {
        if (smallest_prime[i] == 0) {
            smallest_prime[i] = ++color_count;
            for (int j = i; j <= 1000; j += i) {
                if (smallest_prime[j] == 0) {
                    smallest_prime[j] = color_count;
                }
            }
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            color[i] = smallest_prime[a[i]];
        }

        cout << color_count << "\n";
        for (int i = 0; i < n; ++i) {
            cout << color[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

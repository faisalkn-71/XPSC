#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> lastDigitCount(10, 0);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            lastDigitCount[a[i] % 10]++;
        }

        bool found = false;
        for (int i = 0; i < 10 && !found; ++i) {
            if (lastDigitCount[i] == 0) continue;
            for (int j = i; j < 10 && !found; ++j) {
                if (i == j && lastDigitCount[j] < 2) continue;
                if (lastDigitCount[j] == 0) continue;
                for (int k = j; k < 10 && !found; ++k) {
                    if ((i == k && lastDigitCount[k] < 2) || (j == k && lastDigitCount[k] < 2)) continue;
                    if (i == j && j == k && lastDigitCount[k] < 3) continue;
                    if (lastDigitCount[k] == 0) continue;
                    if ((i + j + k) % 10 == 3) {
                        found = true;
                    }
                }
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


    return 0;
}
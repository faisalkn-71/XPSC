#include <iostream>
#include <string>
using namespace std;

bool canCreateTemplate(int n, const string& a, const string& b, const string& c) {
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            // a[i] and b[i] are the same, so t[i] must be lowercase a[i]
            if (c[i] == a[i]) {
                return false;  // c[i] matches, so it doesn't work
            }
        } else {
            // a[i] and b[i] are different, so t[i] must not match c[i]
            if (c[i] != a[i] && c[i] != b[i]) {
                // c[i] doesn't match either a[i] or b[i], it works
                continue;
            }
            if (c[i] == a[i]) {
                // c[i] matches a[i], so t[i] must be different
                if (c[i] != b[i]) {
                    // t[i] can be b[i] in uppercase
                    continue;
                } else {
                    return false;
                }
            }
            if (c[i] == b[i]) {
                // c[i] matches b[i], so t[i] must be different
                if (c[i] != a[i]) {
                    // t[i] can be a[i] in uppercase
                    continue;
                } else {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;

        if (canCreateTemplate(n, a, b, c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string p, h;
        cin >> p >> h;
        sort(p.begin(), p.end());
        int n1 = p.size(), n2 = h.size();
        bool flag = false;
        for (int i = 0; i <= n2 - n1; i++) {
            string n = h.substr(i, n1);
            sort(n.begin(), n.end());
            if (n == p) {
                flag = true;
                break;
            }
        }
        (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}

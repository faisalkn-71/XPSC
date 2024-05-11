#include<bits/stdc++.h>
using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;
    if((r-l+1) > 3*1e5 || (r-l)%2 == 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for(long long i = l; i <= r; i += 2) {
            cout << i << " " << i + 1 << endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        vector<int> a;
        while (x != 0) {
            if (x % 2 == 0) {
                a.push_back(0);
                x /= 2;
            } else {
                int next_bit = (x % 4 == 1) ? 1 : -1;
                a.push_back(next_bit);
                x -= next_bit;
                x /= 2;
            }
        }
        
        int n = a.size();
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i < n - 1 ? " " : "\n");
        }
    }
    
    return 0;
}

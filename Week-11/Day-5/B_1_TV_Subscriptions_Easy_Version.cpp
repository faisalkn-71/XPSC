#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, d;
        cin >> n >> k >> d;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        unordered_map<int, int> freq;
        int unique_count = 0;
        
        for (int i = 0; i < d; ++i) {
            if (freq[a[i]] == 0) {
                unique_count++;
            }
            freq[a[i]]++;
        }
        
        int min_unique = unique_count;
        
        for (int i = d; i < n; ++i) {
           if (--freq[a[i - d]] == 0) {
                unique_count--;
            }
            
            if (freq[a[i]]++ == 0) {
                unique_count++;
            }
            
            min_unique = min(min_unique, unique_count);
        }
        
        cout << min_unique << endl;
    }
    
    return 0;
}

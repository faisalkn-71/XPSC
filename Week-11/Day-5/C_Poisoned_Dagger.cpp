#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
bool canDealEnoughDamage(long long k, const vector<long long>& a, long long h) {
    long long total_damage = 0;
    long long n = a.size();
    
    for (long long i = 0; i < n - 1; ++i) {
        total_damage += min(k, a[i + 1] - a[i]);
        if (total_damage >= h) return true; 
    }
    
    total_damage += k; 
    return total_damage >= h;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, h;
        cin >> n >> h;
        
        vector<long long> a(n);
        for (long long i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        long long low = 1, high = LLONG_MAX;
        long long answer = high;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            
            if (canDealEnoughDamage(mid, a, h)) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}

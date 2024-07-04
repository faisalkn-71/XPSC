#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int minDaysToRepaint(const vector<int>& houses, int k) {
    int n = houses.size();
    unordered_map<int, int> color_count;
    
    
    for (int target_color = 1; target_color <= 100; ++target_color) {
        int days_needed = 0;
        int i = 0;
        while (i < n) {
            if (houses[i] != target_color) {
                
                ++days_needed;
                i += k; 
            } else {
                ++i;
            }
        }
        color_count[target_color] = days_needed;
    }
    
   
    int min_days = n; 
    for (const auto& [color, days] : color_count) {
        min_days = min(min_days, days);
    }
    
    return min_days;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> houses(n);
        for (int i = 0; i < n; ++i) {
            cin >> houses[i];
        }
        cout << minDaysToRepaint(houses, k) << "\n";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> sweets(n);
    for (int i = 0; i < n; i++) {
        cin >> sweets[i];
    }
    
    sort(sweets.begin(), sweets.end());
    
    int max_children = 0;
    
    for (int sum = sweets[0] + sweets[1]; sum <= sweets[n-2] + sweets[n-1]; sum++) {
        unordered_map<int, bool> used;
        int current_children = 0;
        
        int left = 0, right = n - 1;
        while (left < right) {
            if (sweets[left] + sweets[right] == sum) {
                if (!used[left] && !used[right]) {
                    current_children++;
                    used[left] = used[right] = true;
                    left++;
                    right--;
                }
            } else if (sweets[left] + sweets[right] < sum) {
                left++;
            } else {
                right--;
            }
        }
        
        max_children = max(max_children, current_children);
    }
    
    cout << max_children << endl;
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

bool canClearField(vector<int>& heights) {
    int n = heights.size();
    int minHeight = *min_element(heights.begin(), heights.end());
    for (int i = 0; i < n; ++i) {
        if (heights[i] % 2 != minHeight % 2) {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> heights(n);
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }
        if (canClearField(heights)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
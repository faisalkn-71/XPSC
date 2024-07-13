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
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        unordered_map<int, long long> freqMap;
        long long countPairs = 0;

        for (int i = 0; i < n; ++i) {
            int key = a[i] - i;
            if (freqMap.find(key) != freqMap.end()) {
                countPairs += freqMap[key];
            }
            freqMap[key]++;
        }

        cout << countPairs << endl;
    }

    return 0;
}
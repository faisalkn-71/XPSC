#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<int> results(t);

    for (int k = 0; k < t; ++k) {
        string s;
        cin >> s;
        stack<char> st;

        for (char c : s) {
            if (!st.empty() && ((st.top() == 'A' && c == 'B') || (st.top() == 'B' && c == 'B'))) {
                st.pop();
            } else {
                st.push(c);
            }
        }
        
        results[k] = st.size();
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}

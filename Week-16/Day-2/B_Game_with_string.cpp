#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack<char> st;
    int operations = 0;

    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
            operations++;
        } else {
            st.push(c);
        }
    }

    if (operations % 2 == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}
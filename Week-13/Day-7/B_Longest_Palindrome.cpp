#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<string> strings(n);
    unordered_map<string, int> str_map;

    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
        str_map[strings[i]] = i;
    }

    vector<bool> used(n, false);
    string front_part = "";
    string back_part = "";
    string middle_part = "";

    for (int i = 0; i < n; ++i) {
        if (used[i]) continue;

        string rev_str = strings[i];
        reverse(rev_str.begin(), rev_str.end());

        if (str_map.find(rev_str) != str_map.end() && !used[str_map[rev_str]]) {
            if (strings[i] == rev_str) {
                middle_part = strings[i];
            } else {
                front_part += strings[i];
                back_part = rev_str + back_part;
            }
            used[i] = true;
            used[str_map[rev_str]] = true;
        }
    }

    string palindrome = front_part + middle_part + back_part;
    cout << palindrome.size() << endl;
    if (!palindrome.empty()) {
        cout << palindrome << endl;
    }

    return 0;
}
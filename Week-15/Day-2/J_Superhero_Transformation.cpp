#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

bool canTransform(const string& s, const string& t) {
    if (s.length() != t.length()) {
        return false;
    }

    for (size_t i = 0; i < s.length(); ++i) {
        if ((isVowel(s[i]) && !isVowel(t[i])) || (!isVowel(s[i]) && isVowel(t[i]))) {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    if (canTransform(s, t)) {
        cout << "Yes" << endl;
    } 
    else {
        cout << "No" << endl;
    }


    return 0;
}
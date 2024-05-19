#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> cnt(26);
    for (char c : s) {
        cnt[c - 'A']++;
    }
    int check = 0;
    for (int i = 0; i < 26; i++) {
        check += (cnt[i] % 2);
    }
    if (check > 1) {
        cout << "NO SOLUTION";
    } else {
        string first_half = "", second_half = "";
        char odd_char = ' ';
        for (int i = 0; i < 26; i++) {
            if (cnt[i]) {
                string str(cnt[i] / 2, i + 'A');
                first_half = first_half + str;
                second_half = str + second_half;
                if (cnt[i] % 2) {
                    odd_char = i + 'A';
                }
            }
        }
        cout << first_half;
        if (odd_char != ' ') {
            cout << odd_char;
        }
        cout << second_half;
    }
    return 0;
}

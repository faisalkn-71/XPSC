#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        int n = s.length();

        // If the string length is 1, it always costs 1 to delete it
        if (n == 1) {
            results[i] = 1;
            continue;
        }

        // Count the number of transitions
        int transitions = 0;
        for (int j = 1; j < n; ++j) {
            if (s[j] != s[j-1]) {
                transitions++;
            }
        }

        // Number of blocks is transitions + 1
        int blocks = transitions + 1;
        // The minimum cost is the number of blocks divided by 2
        results[i] = (blocks + 1) / 2;
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}

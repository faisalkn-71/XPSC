#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<string>> words(3, vector<string>(n));
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < n; j++) {
                cin >> words[i][j];
            }
        }
        map<string, int> count;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < n; j++) {
                count[words[i][j]]++;
            }
        }
        vector<int> points(3, 0);
        for(const auto& pair : count) {
            if(pair.second == 1) {
                for(int i = 0; i < 3; i++) {
                    if(std::find(words[i].begin(), words[i].end(), pair.first) != words[i].end()) {
                        points[i] += 3;
                    }
                }
            } else if(pair.second == 2) {
                for(int i = 0; i < 3; i++) {
                    if(std::find(words[i].begin(), words[i].end(), pair.first) != words[i].end()) {
                        points[i]++;
                    }
                }
            }
        }
        for(int point : points) {
            cout << point << " ";
        }
        cout << endl;
    }
    return 0;
}

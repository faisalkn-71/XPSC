#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> songs(n);
    for(int i = 0; i < n; i++) {
        cin >> songs[i];
    }

    set<int> unique_songs;
    int start = 0, end = 0, max_length = 0;

    while(end < n) {
        if(unique_songs.find(songs[end]) == unique_songs.end()) {
            unique_songs.insert(songs[end]);
            max_length = max(max_length, end - start + 1);
            end++;
        } else {
            unique_songs.erase(songs[start]);
            start++;
        }
    }

    cout << max_length << endl;

    return 0;
}

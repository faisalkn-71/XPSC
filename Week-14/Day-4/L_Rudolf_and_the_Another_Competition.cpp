#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
struct Participant {
    int index;
    int points;
    long long penalty;
};

bool compare(const Participant& a, const Participant& b) {
    if (a.points != b.points)
        return a.points > b.points;
    return a.penalty < b.penalty;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;

        vector<vector<int>> times(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> times[i][j];
            }
        }

        vector<Participant> participants(n);
        for (int i = 0; i < n; ++i) {
            participants[i].index = i + 1;
            vector<int> solveTimes = times[i];
            sort(solveTimes.begin(), solveTimes.end());

            int points = 0;
            long long penalty = 0;
            long long currentTime = 0;
            for (int time : solveTimes) {
                if (currentTime + time > h) break;
                currentTime += time;
                points++;
                penalty += currentTime;
            }
            participants[i].points = points;
            participants[i].penalty = penalty;
        }

        sort(participants.begin(), participants.end(), compare);

        for (int i = 0; i < n; ++i) {
            if (participants[i].index == 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
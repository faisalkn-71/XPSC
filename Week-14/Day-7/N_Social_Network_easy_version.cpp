#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    
    vector<int> messages(n);
    for (int i = 0; i < n; ++i) {
        cin >> messages[i];
    }
    
    deque<int> screen;
    unordered_set<int> on_screen;
    
    for (int i = 0; i < n; ++i) {
        int friend_id = messages[i];
        
        if (on_screen.find(friend_id) == on_screen.end()) {
            if (screen.size() == k) {
                int last_friend = screen.back();
                screen.pop_back();
                on_screen.erase(last_friend);
            }
            screen.push_front(friend_id);
            on_screen.insert(friend_id);
        }
    }
    
    cout << screen.size() << endl;
    for (int friend_id : screen) {
        cout << friend_id << " ";
    }
    cout << endl;

    return 0;
}
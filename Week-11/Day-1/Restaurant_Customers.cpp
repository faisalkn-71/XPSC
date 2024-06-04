#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    
    vector<pair<int, int>> events;

    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }

    sort(events.begin(), events.end());
    int maxx = 0;
    int cur = 0;

    for(auto& event: events){
        cur += event.second;
        if(cur > maxx){
            maxx = cur;
        }
    }

    cout<<maxx<<endl;

    return 0;
}
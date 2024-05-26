#include<bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int BIT[MAXN], A[MAXN], pos[MAXN];
int N;

void update(int idx, int val){
    for(; idx <= N; idx += idx&-idx)
        BIT[idx] += val;
}

int query(int idx){
    int sum = 0;
    for(; idx > 0; idx -= idx&-idx)
        sum += BIT[idx];
    return sum;
}

int main(){
    cin >> N;
    string s;
    cin >> s;
    map<char, queue<int>> mp;
    for(int i = 1; i <= N; i++){
        mp[s[i-1]].push(i);
    }
    for(int i = 1; i <= N; i++){
        A[i] = mp[s[N-i]].front();
        mp[s[N-i]].pop();
    }
    long long ans = 0;
    for(int i = N; i >= 1; i--){
        ans += query(A[i]);
        update(A[i], 1);
    }
    cout << ans << endl;
    return 0;
}

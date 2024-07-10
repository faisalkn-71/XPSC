#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
bool canFormPermutation(vector<int>& A, int N) {
    unordered_set<int> requiredNumbers;
    for (int i = 1; i <= N; ++i) {
        requiredNumbers.insert(i);
    }

    for (int i = 0; i < N; ++i) {
        int needed = A[i];
        while (needed <= N && requiredNumbers.find(needed) == requiredNumbers.end()) {
            ++needed;
        }
        if (needed > N) {
            return false;
        }
        requiredNumbers.erase(needed);
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        if (canFormPermutation(A, N)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    

    return 0;
}
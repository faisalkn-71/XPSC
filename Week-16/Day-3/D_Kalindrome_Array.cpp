#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
bool isPalindrome(const vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n / 2; ++i) {
        if (a[i] != a[n - i - 1])
            return false;
    }
    return true;
}

bool isKalindrome(vector<int>& a, int x) {
    vector<int> b;
    for (int val : a) {
        if (val != x)
            b.push_back(val);
    }
    return isPalindrome(b);
}

bool canBeKalindrome(vector<int>& a) {
    int l = 0, r = a.size() - 1;
    while (l < r) {
        if (a[l] != a[r]) {
            return isKalindrome(a, a[l]) || isKalindrome(a, a[r]);
        }
        ++l;
        --r;
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (canBeKalindrome(a)) {
            cout << "YES"<<endl;
        } 
        else {
            cout << "NO"<<endl;
        }
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int beautifulNum(int n) {
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        ll num = i;
        while (num <= n) {
            ++count;
            num = num * 10 + i;
        }
    }
    return count;
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
        cout << beautifulNum(n) << endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll minSteps(ll n, ll k) {
    ll steps = 0;
    while (n > 0) {
        if (k == 1) {
            steps += n;
            break;
        }
        if (n % k == 0) {
            n /= k;
            steps++;
        } else {
            ll remainder = n % k;
            n -= remainder;
            steps += remainder;
        }
    }
    return steps;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << minSteps(n, k) << endl;
    }

    return 0;
}
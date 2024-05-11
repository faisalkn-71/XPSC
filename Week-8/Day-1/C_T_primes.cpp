#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n--) {
        long long x;
        cin >> x;
        long long sq = sqrt(x);
        if(sq * sq == x && isPrime(sq)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

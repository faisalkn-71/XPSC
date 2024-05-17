#include<bits/stdc++.h>
using namespace std;

bool checkDivisibility(long long A, long long B) {
    for (long long i = 2; i * i <= B; i++) {
        if (B % i == 0) {
            if (A % i != 0) return false;
            while (B % i == 0) B /= i;
        }
    }
    if (B > 1 && A % B != 0) return false;
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long A, B;
        cin >> A >> B;
        if (checkDivisibility(A, B)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

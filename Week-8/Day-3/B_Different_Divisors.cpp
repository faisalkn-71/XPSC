#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int smallestNumber(int d) {
    int prime1 = 1 + d;
    while (!isPrime(prime1)) prime1++;
    int prime2 = prime1 + d;
    while (!isPrime(prime2)) prime2++;
    return prime1 * prime2;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int d;
        cin >> d;
        cout << smallestNumber(d) << endl;
    }
    return 0;
}

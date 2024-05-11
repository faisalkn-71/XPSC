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
    long long n;
    cin >> n;
    long long a = sqrt(n);
    while(n % a != 0 || !isPrime(n / a)) {
        a--;
    }
    long long b = n / a;
    cout << a << " " << b << endl;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long red = n / a;
    long long blue = n / b;
    long long both = n / (a*b/__gcd(a,b));
    red -= both;
    blue -= both;
    long long ans = max(p, q) * both + red * p + blue * q;
    cout << ans << endl;
    return 0;
}

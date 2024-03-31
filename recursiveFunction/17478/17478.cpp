#include<iostream>
using namespace std;
const long long mod = 1000000007LL;
long long custom_pow(long long a, long long p) {
    if (p == 0) {
        return 1;
    }
    else if (p % 2 != 0) {
        //cout << p << "\n";
        return custom_pow(a, (p - 1)) * a % mod;
    }
    else {
        //cout << p << "\n";
        long long half = custom_pow(a, p / 2);
        return half * half % mod;
    }
}
int main() {
    long long n, k;
    cin >> n >> k;
    long long n_pac = 1;
    for (long long i = 1; i <= n; i++) {
        n_pac *= i;
        n_pac %= mod;
    }
    long long k_pac = 1;
    for (long long i = 1; i <= k; i++) {
        k_pac *= i;
        k_pac %= mod;
    }
    long long nk_pac = 1;
    for (long long i = 1; i <= (n - k); i++) {
        nk_pac *= i;
        nk_pac %= mod;
    }
    long long deno = k_pac * nk_pac % mod;
    long long result = n_pac * custom_pow(deno, mod - 2) % mod;

    cout << result;
}
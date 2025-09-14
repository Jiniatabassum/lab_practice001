#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    if (!(cin >> n)) return 0;
    if (isPrime(n)) cout << n << " is prime\n";
    else cout << n << " is not prime\n";
    return 0;
}

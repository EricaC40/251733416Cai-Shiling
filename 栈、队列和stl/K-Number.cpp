#include <bits/stdc++.h>
using namespace std;
vector<int> generatePrimes(int max_n) {
    vector<bool> isPrime(max_n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= max_n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= max_n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= max_n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n;
    int max_p4 = pow(n, 0.25) + 5;  
    int max_p3 = pow(n, 1.0/3) + 5;
    int max_p2 = sqrt(n) + 5;      

    int max_prime = max(max(max_p2, max_p3), max_p4);
    vector<int> primes = generatePrimes(max_prime);

    vector<bool> isPrimeCheck(max_prime + 1, false);
    for (int p : primes) {
        isPrimeCheck[p] = true;
    }
    unordered_set<int> ssnumbers;

    for (int p3 : primes) {
        long long p4 = 1LL * p3 * p3 * p3 * p3;  // p3⁴
        if (p4 > n) break;
        
        for (int p2 : primes) {
            long long p3_cube = 1LL * p2 * p2 * p2;  // p2³
            if (p4 + p3_cube > n) break;
            
            for (int p1 : primes) {
                long long p2_square = 1LL * p1 * p1;  // p1²
                long long sum = p4 + p3_cube + p2_square;
                
                if (sum > n) break;
                if (sum <= n) {
                   ssnumbers.insert((int)sum);
                }
            }
        }
    }
    cout << ssnumbers.size() << "\n";
    return 0;
}
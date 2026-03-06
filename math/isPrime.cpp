// Use quando precisar testar se um numero é primo
// Complexidade: O(sqrt(n))
bool isPrime(int x) {
    if (x <= 1) return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }

    return true;
}
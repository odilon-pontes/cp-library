/*
1. Criamos um array freq inicializado com 0.
2. Cada índice representa um número.
3. Cada valor representa quantas vezes ele apareceu.

Frequency array é muito mais rápido que usar map quando os valores são pequenos (ex: até 10^5 ou letras).
*/

#include <bits/stdc++.h>
using namespace std;

void main() {
    string s = "banana";
    int freq[26] = {0};

    for (char c : s) {
        freq[c - 'a']++;
    }

    cout << "a: " << freq['a' - 'a'] << endl;
    cout << "b: " << freq['b' - 'a'] << endl;
    cout << "n: " << freq['n' - 'a'] << endl;
}
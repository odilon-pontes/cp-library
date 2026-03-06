/*
FÓMULA GERAL
Para calcular a soma de l até r:
sum(l, r) = prefix[r] - prefix[l-1]

cada consulta → O(n)
pré-processamento → O(n)
consulta → O(1)

aparece muito em:
- soma de intervalos
- contagem de elementos em intervalo
- soma de matriz (prefix sum 2D)
- problemas de diferença acumulada
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {2, 4, 1, 5, 3};
    int n = 5;

    int prefix[n+1];

    prefix[0] = 0;

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + arr[i-1];
    }

    int l = 1, r = 3;

    int soma = prefix[r+1] - prefix[l];

    cout << soma << endl;

    return 0;

}
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {2,1,5,1,3,2};
    int k = 3;

    int n = arr.size();

    int soma = 0;

    for(int i = 0; i < k; i++){
        soma += arr[i];
    }

    int max_soma = soma;

    for(int i = k; i < n; i++){
        soma = soma - arr[i-k] + arr[i];
        max_soma = max(max_soma, soma);
    }

    cout << max_soma << endl;

}
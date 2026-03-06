#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)


// calcular soma de submatriz em O(1).
// complexidade O(n * m)
int main() {
    int n = 3, m = 3;

    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int pref[3][3];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            pref[i][j] = a[i][j];

            if(i > 0) pref[i][j] += pref[i-1][j];
            if(j > 0) pref[i][j] += pref[i][j-1];
            if(i > 0 && j > 0) pref[i][j] -= pref[i-1][j-1];

        }
    }
    
    int r1 = 1, c1 = 1;
    int r2 = 2, c2 = 2;

    int soma = pref[r2][c2];

    if(r1 > 0) soma -= pref[r1-1][c2];
    if(c1 > 0) soma -= pref[r2][c1-1];
    if(r1 > 0 && c1 > 0) soma += pref[r1-1][c1-1];

    cout << soma << endl;

}
/*
Problemas clássicos:
- encontrar posição
- menor valor que satisfaz condição

*/
int searchBinary(int n) {
    int l = 0, r = n-1;

    bool condicao = true;
    while (l <= r) {
        int mid = (l+r)/2;

        if (condicao)
            r = mid-1;
        else
            l = mid+1;
    }
    return l;
}
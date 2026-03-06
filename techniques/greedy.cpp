/*
Greedy (algoritmo guloso) é uma técnica onde sempre escolhemos a melhor opção local no momento, esperando que isso leve à melhor solução global.
*/


#include <bits/stdc++.h>
using namespace std;

int qtdMoedas(){

    int valor = 36;

    vector<int> moedas = {25,10,5,1};

    int quantidade = 0;

    for(int moeda : moedas){

        quantidade += valor / moeda;

        valor %= moeda;

    }

    cout << quantidade << endl;

}

int maxAtividades() {

    vector<pair<int,int>> atividades = {
        {1,3},
        {2,5},
        {4,7},
        {6,9}
    };

    sort(atividades.begin(), atividades.end(),
         [](auto a, auto b){
            return a.second < b.second;
         });

    int fim = -1;
    int count = 0;

    for(auto a : atividades){

        if(a.first >= fim){
            count++;
            fim = a.second;
        }

    }

    cout << count << endl;

}
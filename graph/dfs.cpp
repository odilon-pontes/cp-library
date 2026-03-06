
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
bool visited[100];

// Depth First Search
void dfs(int v){

    visited[v] = true;
    cout << v << " ";

    for(int u : adj[v]){
        if(!visited[u]){
            dfs(u);
        }
    }

}

int main(){

    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(4);

    dfs(1);

}
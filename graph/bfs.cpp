#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
bool visited[100];


// Breadth First Search
void bfs(int start){

    queue<int> q;

    visited[start] = true;
    q.push(start);

    while(!q.empty()){

        int v = q.front();
        q.pop();

        cout << v << " ";

        for(int u : adj[v]){
            if(!visited[u]){
                visited[u] = true;
                q.push(u);
            }
        }

    }

}

int main(){

    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(4);

    bfs(1);

}
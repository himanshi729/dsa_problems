#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int> *l;

public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
void addEdge(int u, int v){
    l[u].push_back(v);
    l[v].push_back(u);
}
void print(){
    for(int u=0; u<V; u++){
        list<int> neighbours = l[u];
        cout<<u<<" : ";
        for(int V: neighbours){
            cout<<V<<" ";
        }
        cout<<endl;
        }
    }

void dfsHelper(int u, vector<bool> &vis)
{
    vis[u] = true;
    cout<<u<<" ";

    list<int> neighbour = l[u];
    for(int v: neighbour){
        if(!vis[v]){
            dfsHelper(v, vis);
        }
    }
}

void dfs(){
    vector<bool> vis(V, false);
    for(int i =0; i<V; i++){
        if(!vis[i]){
            dfsHelper(i, vis);
            cout<<endl;
        }
    }
    dfsHelper(0, vis);
    cout<<endl;
}

// ---------- BFS - disconnected graph --------------------

void bfsHelper(int st, vector<bool> &vis){
    queue<int> q;
    q.push(st);
    vis[st] = true;

    while(q.size()>0){
        int curr = q.front();//current vertex
        q.pop();

        cout<<curr<<" ";

        list<int> neighbours = l[curr];
        for(int V:neighbours){
            if(!vis[V]){
                vis[V] = true;
                q.push(V);
            }
        }
    }
    cout<<endl;
}
void bfs(){
    vector<bool> vis(V, false);
    for(int i=0; i<V; i++){
        if(!vis[i]){
            bfsHelper(i, vis);
            cout<<endl;
        }
    }
}

};

int main(){
    Graph graph(10);
    graph.addEdge(2,5);
    graph.addEdge(0,2);
    graph.addEdge(1,6);
    graph.addEdge(4,3);
    graph.addEdge(4,6);
    graph.addEdge(4,9);
    graph.addEdge(3,8);
    graph.addEdge(3,7);
    graph.addEdge(3,4);
    graph.addEdge(5,2);
    graph.addEdge(6,1);
    graph.addEdge(6,4);
    graph.addEdge(7,3);
    graph.addEdge(8,3);
    graph.addEdge(9,4);
    


    graph.bfs();

    return 0;
  
}
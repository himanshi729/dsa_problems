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

void bfs(){
    queue<int> q;
    vector<bool> vis(V, false);
    q.push(0);
    vis[0] = true;

    while(q.size()>0){
        int u = q.front();//current vertex
        q.pop();

        cout<<u<<" ";

        list<int> neighbours = l[u];
        for(int V:neighbours){
            if(!vis[V]){
                vis[V] = true;
                q.push(V);
            }
        }
    }
    cout<<endl;
}


};

int main(){
    Graph graph(8);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);
    graph.addEdge(3,5);
    graph.addEdge(4,5);
    graph.addEdge(5,6);
    


    graph.bfs();

    return 0;
  
}
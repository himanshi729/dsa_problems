#include<iostream>
#include<vector>
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

    bool unDirCycleHelper(int src, int par, vector<bool>&vis){
        vis[src] = true;
        list<int>neighbours = l[src];
        for(int v : neighbours){
            if(!vis[v]){
                if(unDirCycleHelper(v, src, vis)){
                    return true;
                }
                else{
                    if(v != par){ //cycle condition
                        return true;
                    }
                }
            }
        }
        return false;

    }

    bool isCycleUnDir(){
        vector<bool> vis(V, false);
        return unDirCycleHelper(0, -1, vis);
    }
};

int main(){
    int V = 5;
    Graph graph(V);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(0,3);
    graph.addEdge(1,2);
    graph.addEdge(3,4);

    cout<<graph.isCycleUnDir()<<endl;

    return 0;
  
}
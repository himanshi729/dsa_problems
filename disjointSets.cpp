#include<iostream>
#include<vector>
#include<list>
using namespace std;

class DisjointSet{
    public: 
        int n;
        vector<int> par;
        vector<int> rank;

        DisjointSet(int n){
            this->n = n;
            for(int i=0; i<n; i++){
                par[i] = i;
                rank[i] = 0;
            }
        }

        int find(int x){
            if(par[x] == x){
            return x;
            }
            return find(par[x]);
        }

        int UnionByRank(int a, int b){
            int parA = find(a);
            int parB = find(b);

            if(rank[parA] > rank[parB]){
                par[parB] = parA;
                rank[parA]++;
            }
            else if(rank[parA] > rank[parB]){
                par[parB] = parA;
            }
            else{
                par[parA] = parB;
            }
        }
};

int main(){
    DisjointSet dj(6);
    dj.UnionByRank(0, 2);
    cout<<dj.find(2)<<endl;
    dj.UnionByRank(1, 3);
    dj.UnionByRank(2, 5);
}
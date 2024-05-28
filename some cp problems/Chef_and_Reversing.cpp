#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
const int INF = 1e9+7;

vector<pair<int,int>> g[N];
vector<int> lev(N, INF);
int n, m;

int bfs(){
    deque<int> q;
    q.push_back(1);
    lev[1] = 0;
    while(!q.empty()){
         
    }
}



int main(){
    cin>>n>>m;
    for(int i = 0; i<m;i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back({y, 0});
        g[y].push_back({x, 1});
    }

    cout<<bfs() <<endl;
}
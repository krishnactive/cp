#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define lld long double
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vl vector<ll>
#define ump unordered_map
#define uset unordered_set
#define mset multiset
#define minA(v) *min_element(v.begin(),v.end())
#define maxA(v) *max_element(v.begin(),v.end())
#define st(v) sort(v.begin(),v.end())
#define fin(a,n) for(int i=0;i<n;i++){ll x; cin>>x;a.pb(x);} 
#define f(n) for(ll i=0;i<n;i++)
#define f1(n) for(ll i=1;i<n;i++)
#define int long long
#define min fmin
#define max fmax
const int N = 1e5+7;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

vector<int> ar[N];
int dist[N];
int par[N];
bool vis[N];

int n,m; 

bool bfs(){
    queue<int> q;
    dist[1] = 1;
    vis[1] = 1;
    q.push(1);
    while(!q.empty()){
        int node = q.front();
        q.pop();

        if(node == n) return true;    

        for(int v: ar[node]){
            if(vis[v]==false){
                dist[v] = dist[node]+1;
                vis[v]=true;
                par[v] = node;
                q.push(v);
            }
        }
    }
    return false;
}



void solve() {
    int a , b;
    cin>>n>>m;
    for(int  i=1;i<=m;i++){
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    if(bfs()){
        cout<<dist[n]<<"\n";
        int path = n;
        vector<int> res;
        while(path != 0){
            res.pb(path);
            path = par[path];
        }
        reverse(res.begin(),res.end());
        for(auto &el : res) cout<<el<<" ";
    }
    else cout<<"IMPOSSIBLE";
  

}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.

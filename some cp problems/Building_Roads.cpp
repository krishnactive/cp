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
int vis[N];
vi g[N];

void dfs(int i){
    vis[i] = true;
    for (auto j : g[i]) {
        if (!vis[j]) dfs(j);
    }
    return;
}


void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<int> ans;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            
            dfs(i);
            cnt++;
            ans.push_back(i);
        }
        // if(cnt>2)ans.push_back(ans.size()-2);
    }
if(ans.size()==1){
    cout<<"0\n";
    return;
}
  cout<<cnt-1<<"\n";
  int ch=0;
  int i=0;
  int j=1;
  while(true){
        cout<<ans[i]<<" "<<ans[j]<<"\n";
        i++,j++;
        if(j>=ans.size())break;
  }

  

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

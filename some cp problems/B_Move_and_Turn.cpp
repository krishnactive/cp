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
// #define int long long
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
 
int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}
int dp[2007][2007];
int vis1[2007][2007];
int vis2[2007][2007];
int n;
int run =0;
void fn(int x,int y, int m, int r){
    run++;
    if(r==0){
        dp[x][y]=1;
        return;
    }
    
    if(vis1[x][y]==r&&m==0)return;
    if(vis2[x][y]==r&&m==1)return;

    if(m==0||r==n){
        fn(x+1,y,1,r-1);
        fn(x-1,y,1,r-1);
        vis1[x][y]=r;
    }
    if(m==1||r==n){
        fn(x,y+1,0,r-1);
        fn(x,y-1,0,r-1);
        vis2[x][y] = r;
    }
}



void solve() {
    cin>>n;
    int cnt =0;
    memset(dp,-1,sizeof(dp));
    memset(vis1,-1,sizeof(vis1));
    memset(vis2,-1,sizeof(vis2));
    fn(1007,1007,-1,n);

    for(int i=0;i<2007;i++){
        for(int j=0;j<2007;j++){
            if(dp[i][j]==1)cnt++;
        }
    }
    cout<<cnt<<"\n";
    // cout<<run;
    
  

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

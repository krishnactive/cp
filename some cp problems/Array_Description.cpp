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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    int mod = 1e9+7;
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i =0 ;i <n;i++){
        cin>>a[i];
    }
    vector<vector<int>> dp((n+1), vector<int>(m+1));

    for(int i=1;i<=m;i++){
        if(a[0]==i||a[0]==0){
            dp[1][i]=1;
        }
    }
    for(int i =2;i<=n;i++){
        for(int k=1;k<=m;k++){
            if(a[i-1]!=0&&a[i-1]!=k){
                dp[i][k]=0;
                continue;
            }
            for(int prev = k-1;prev<=k+1;prev++){
                if(prev>=1&&prev<=m){
                    dp[i][k]=(dp[i][k]+dp[i-1][prev])%mod;
                }
            }
        }
    }
  int ans=0;
  for(int i=1;i<=m;i++){
    ans=(ans+dp[n][i])%mod;
  }
cout<<ans<<"\n";
return;
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

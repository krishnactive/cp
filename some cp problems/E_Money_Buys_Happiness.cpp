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
    int  m , x;
    cin>>m>>x;

    vector<int> dp;
    dp.push_back(0);
    int c[m] , h[m];
    for(int i = 0;i<m;i++){
        cin>>c[i]>>h[i];
        for(int j = 0;j<h[i];j++){
            dp.push_back(-1e18);
        }
    }

    for(int i = 0;i<m;i++){
        for(int j = dp.size()-1;j>=0;j--){
            dp[j]+=x;
            if(j>=h[i]&&dp[j-h[i]]>=c[i]){
                dp[j] = max(dp[j] , dp[j-h[i]]-c[i]+x);
            }
        }
    }
    int ans = 0;
    for(int i = 0;i<dp.size();i++){
        if(dp[i]>=0){
            ans = i;
        }
    }
cout<<ans<<"\n";

  

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
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
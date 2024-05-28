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

int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

void solve() {
    ll n;
    cin >> n;
    vl a;
    fin(a, n);
    set<int> numSet(a.begin(), a.end());
    int len = 0;

    map<int, int> dp;
    for (int i = 0; i < n; ++i) {
        map<int, int> c_dp;
        for (const auto& it : dp) {
            int cur_lcm = it.first;
            int cur_len = it.second;
            int new_lcm = lcm(cur_lcm, a[i]);
            if (numSet.find(new_lcm) == numSet.end()) {
                c_dp[new_lcm] = max(c_dp[new_lcm], cur_len + 1);
            }
        }
        if (numSet.find(a[i]) == numSet.end()) {
            c_dp[a[i]] = max(c_dp[a[i]], 1);
        }
        for (const auto& it : c_dp) {
            int new_lcm = it.first;
            int new_len = it.second;
            dp[new_lcm] = max(dp[new_lcm], new_len);
            len = max(len, new_len);
        }
    }
    cout << len << "\n";
}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

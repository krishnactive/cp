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
ll n,k;
int a[300007];
int dp[300007][12];

int ans(int ind, int left){
    if(ind == n) return 0;
    if(dp[ind][left]!=-1){
        return dp[ind][left];
    }
    int all = a[ind] + ans(ind+1, left);
    for(int i=1;i<=left;i++){
        int mn = a[ind];
        if(i+ind>=n)break;//for opn more than len
        for(int j=ind;j<ind+i+1;j++){
            mn = min(mn, a[j]);
        }
        all = min(all, (mn*(i+1))+ans(ind+i+1,left-i));
    }
    return dp[ind][left]= all;
}



void solve() {
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n+7;i++){
        for(int j = 0;j<12;j++){
            dp[i][j]=-1;
        }
    }
cout<<ans(0,k)<<"\n";
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
    cin >> t;
    while (t--) {
        
        solve();
        
    }

    return 0;
}
// This is krishna.

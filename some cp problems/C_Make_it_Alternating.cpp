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
const int mod = 998244353;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}
void solve() {
    string s;
    cin>>s;
    int n=s.size();
    int cnt = 1;
    vector<int> pr;
    auto fact = [&](int n)->int{
        int pro =1;
        for(int i=1;i<=n;i++){
            pro = (ll)(pro*i)%mod;
            pro %= mod; 
        }
        return pro%mod;
    };

    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            cnt++;
            if(i==n-1&&cnt!=1)pr.push_back(cnt);
        }
        else if(cnt>1){
            pr.pb(cnt);
            cnt=1;
        }
    }
    int opn = 0;
    int seq = 0;
    int al=1;
for(auto x:pr){
    al *= x%mod;
    al =al%mod;
    opn+=x-1;
}
seq = (seq+al)%mod; 
seq*=fact(opn);
seq %= mod; 
    cout<<opn<<" "<<(seq==0?1:seq)<<"\n";
  

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

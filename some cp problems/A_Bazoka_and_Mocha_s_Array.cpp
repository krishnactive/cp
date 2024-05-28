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
    ll n;
    cin>>n;
    vl a;
    fin(a,n);
    vector<int> c = a;
    int st = 0;
    vl temp;
    for(int i=1;i<n;){
        if(a[i-1]<=a[i]){
            temp.push_back(a[i-1]);
            // temp.push_back(a[i]);
            // c.push_back(a[i-1]);
            // c.push_back(a[i]);
            // i+=2;
            // st = i%n;
        }
        else{
            temp.push_back(a[i-1]);
            for(auto x:temp)c.push_back(x);
            temp.clear();
            st = i;
            // i++;
        }
        i++;
    }
    sort(begin(a),end(a));
    int i=0;
    for(int j = st;j<c.size();j++){
        if(a[i]!=c[j]){
            cout<<"No\n";
            return;
        }
        i++;
    }
    cout<<"Yes\n";
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

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
    // ll n;
    // cin>>n;
    // vl a;
    // fin(a,n);
    int x,n;
    cin>>x>>n;

int ch=x/n;
if(ch>=n)ch=-1;
// if(x%n!=0){

// }
    int ans=1;
    // for(int i=1;i<=x;i++){
    //     if(x/i<n)break;
    //     if(x%i==0&&x/i>=n){
    //         ans=i;
    //     }
    //     if(x/i<n)break;
    // }
    // while(x-ans*n>=0){
    //     if((x-ans*n)%ans==0){
    //         ch=ans;
    //     }
    //     ans++;
    // }
  cout<<ch<<"\n";

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

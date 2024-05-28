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
    int n,k,po,ps;
    cin>>n>>k>>po>>ps;
    vl p,a;
    fin(p,n);
    fin(a,n);
    int e = min(n,k);
    auto ans = [&](int x)->int{
        ll sum = 0;
        ll c_sum=0;
        for(int i=0;i<e;i++){
            sum = max(sum ,c_sum+a[x-1]*(k-i));
            c_sum+=a[x-1];
            x=p[x-1];
        }
        return sum;
    };
    int s = ans(ps);
    int b = ans(po);
    if(s>b){
        cout<<"Sasha\n";
    }
    else if(b>s){
        cout<<"Bodya\n";
    }
    else{
        cout<<"Draw\n";
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
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.

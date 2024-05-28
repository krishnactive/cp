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
    string s1,s2;
    cin>>s1>>s2;

    vector<int > ans1, ans2;
    bool pass = true;
    for(int i=0;i<s1.size();i++) {
        int a = s1[i]-'0';
        int b = s2[i]-'0';
        
            if(pass){
                if(a!=b)
                pass = false;
                ans1.push_back(max(a,b));
                ans2.push_back(min(a,b));
            }
        
        else{
            ans1.push_back(min(a,b));
            ans2.push_back(max(a,b));
        }
    }

    for(auto x:ans1)cout<<x;
    cout<<"\n";
    for(auto x:ans2)cout<<x;
    cout<<"\n";
  
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

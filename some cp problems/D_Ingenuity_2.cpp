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
    string s;
    cin>>s;
    set<char> ch;
    map<char,int> fre,fre2;
    for(int i=0;i<n;i++){
        fre[s[i]]++;
        fre2[s[i]]++;
    }
    int nn = fre['N']/2;
    int ss = fre['S']/2;
    int e = fre['E']/2;
    int w = fre['W']/2;
    if((fre['S']+fre['N'])%2!=0||(fre['E']+fre['W'])%2!=0||(s.size()==2&&s[0]!=s[1])){
        cout<<"NO\n";
        return;
    }
    
    string ans;
    
    for(int i=0;i<n;i++){
        if(s[i]=='N'){
            if(nn>0)
                ans.push_back('R');
            else ans.push_back('H');
            nn--;
        }
        else if(s[i]=='S'){
            if(ss>0){
                ans.push_back('R');
            }
            else ans.push_back('H');
            ss--;
        }
        else if(s[i]=='E'){
            if(e>0){
                ans.push_back('H');
            }
            else ans.push_back('R');
            e--;
        }
        else if(s[i]=='W'){
            if(w>0){
                ans.push_back('H');
            }
            else ans.push_back('R');
            w--;
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

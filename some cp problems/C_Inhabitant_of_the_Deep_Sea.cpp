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
    ll n,k;
    cin>>n>>k;
    vl a;
    fin(a,n);
    int fi =(k+1)/2;
    int ls = k/2;
    int pre=0;
    int ind=-1;
    
    for(int i=0;i<n;i++){
        pre+=a[i];
        if(pre>fi){
            ind=i+1;
            break;
        }
    }
    int ln=-1;
    int pos=0;
    for(int i=n-1;i>=0;i--){
        pos+=a[i];
        if(pos>ls){
            ln=i+1;
            break;
        }
    }
        // ln=n-ln;
    if(ln==ind&&ln!=-1){
        // ln--;
        if(ln!=n){
            int ans=0;
            int ff = pos-a[ln-1];
            if(ff<=ls){
                int ext = ls-ff;
                if(ext+fi>=pre){
                    cout<<n<<"\n";
                    return;
                }
                
            }
        }
        if(ln!=1){
            int ff = pre-a[ln-1];
            if(ff<=fi){
                int ext = fi-ff;
                if(ext+ls>=pos){
                    cout<<n<<"\n";
                    return;
                }
            }
        }
        cout<<n-1<<"\n";
        return; 

    }

    if(ln<ind||(ln==-1&&ind==-1)){
        cout<<n<<"\n";
        return;
    }
    else{
        // if(ln==-1)ln=n;
        // else if(ind==-1)ind=0;
        cout<<n-(ln-ind+1)<<"\n";
        return;
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

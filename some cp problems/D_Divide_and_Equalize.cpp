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
const int m=1e6+7;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}
vector<int>primes;
vector<bool> temp(m,true);
void prime(){
    
    temp[0]=temp[1]=false;
    for(int i=2;i*i<=m;i++){
        if(temp[i])
        for(int j = i*i ;j<=m;j+=i){
            temp[j]=false;
        }
    }
    for(int i=2;i<=m;i++){
        if(temp[i]){
            primes.push_back(i);
        }
    }
}

void solve() {
    ll n;
    cin>>n;
    vl a;
    fin(a,n);
    map<int,int> fre;
    
    for(int i=0;i<n;i++){
        if(temp[a[i]]){
            fre[a[i]]++;
        }
        else{
            // bool pass = false;
            for(auto x:primes){
                while(a[i]%x==0){
                    if(temp[a[i]%x]){
                        fre[x]++;
                        fre[a[i]]++;
                        a[i] = a[i]/x;
                        break;
                    }
                    else{
                        fre[x]++;
                        a[i] = a[i]/x;
                    }
                }
                if(a[i]==1)break;
            }
        }
    }
    for(auto x:fre){
        if(x.second%n!=0){
            cout<<"NO\n";
            return;
        }
        // cout<<x.second<<" "<<x.first<<" \n";
    }
    cout<<"YES\n";
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
    prime();
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.

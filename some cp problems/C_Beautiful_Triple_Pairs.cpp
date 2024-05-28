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
long long fact(int n)
{
      if(n==0)
      return 1;
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
long long nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}


void solve() {
    ll n;
    cin>>n;
    vl a;
    fin(a,n);
    vector<vector<int>> fre;
    int j = 3;
    for(int i=0;i<n-3;i++){
        map<int,int> ch;
        vector<int> temp;
        for(int k = i;k<i+j;k++){
            temp.push_back(a[i]);
            // ch[a[i]]++;
        }
        
        // for(auto it:ch){
        //     temp.push_back(it.second);
        //     temp.push_back(it.first);
        // }
        // fre.push_back(temp);
    }
    // sort(fre.begin(),fre.end());
    int i=0;
    j = 1;
    int sb = 0;
    while(true){
        if(j>=fre.size())break;
        if(fre[i].size()==fre[j].size()){
            bool pass = true;
            for(int k=0;k<fre[i].size();k++){
                if(fre[i][k]!=fre[j][k]){
                    pass = false;
                    break;
                }
            }
            if(pass)sb++;
        }
       i++;
       j++; 
    }
    ll ans=fre.size();
    ans-=sb;
cout<<(ll)nCr(ans,2)<<"\n";

  

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

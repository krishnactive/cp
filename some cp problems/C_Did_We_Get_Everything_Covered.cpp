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
   
    int n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    
map<char,int> fre;
for(auto &x:s)fre[x]++;
string ans3;
bool pass =true;
for(auto &x:fre){
    if(x.second<n&&pass){
        pass =false;
        ans3.pb(x.first);
        break;
    }
}
 if(!pass){
    cout<<"NO\n";
    n-=ans3.size();
    while(n--){
        ans3.pb(ans3[0]);
    }
   
    cout<<ans3<<"\n";
    return;
    }








string ans1;
for(int j=0;j<m;j+=k){
    // if(j>m)break;
    map<char,int>temp;
    set<char> temp2;
    for(int i=j;i<k+j;i++){
        if(i>m)break;
            temp[s[i]]++;
        
    }
    // if(temp.size()!=k){
        for(int ii=0;ii<k;ii++ ){
            if(temp[ii+'a']==0){
                ans1.push_back(ii+'a');
            }
         }
    
    // }
temp2.clear();
temp.clear();
}



if(ans1.size()!=0){cout<<"NO\n";
n-=ans1.size();
while(n--)ans1.push_back('a');
cout<<ans1<<"\n";
}


else cout<<"YES\n";
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

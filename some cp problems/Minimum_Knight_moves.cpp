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
const int N = 1e5+10;
const int INF = 1e9+7;


int vis[8][8];
int lev[8][8];

int getX(string s){
    return s[0] - 'a';
}
int getY(string s){
    return s[1] - '1';
}
bool isValid(int x, int y){
    return x>=0&&y>=0 && x<8&&y<8;
}

vector<pair<int,int>> movements = {
    {-1, 2}, {1, 2},
    {-1, -2}, {1, -2},
    {2, -1}, {2, 1},
    {-2, -1}, {-2, 1}
};


int bfs(string source, string dest){
    int sourceX = getX(source), sourceY = getY(source);
    int destX = getX(dest), destY = getY(dest);

    queue<pair<int,int>> q;
    q.push({sourceX, sourceY});
    vis[sourceX][sourceY] = 1;
    lev[sourceX][sourceY] = 0;

    while(!q.empty()){
        pair<int,int> v = q.front();
        int x = v.first; int y = v.second;
        q.pop();
        
        for(auto movement :movements){
            int childX = movement.first + x;
            int childY = movement.second + y;
            if(!isValid(childX, childY))continue;
            if(!vis[childX][childY]){
                q.push({childX, childY});
                lev[childX][childY] = lev[x][y]+1;
                vis[childX][childY] = 1;
            }
        }
        if(lev[destX][destY]!=INF){
            break;
        }
    }
    return lev[destX][destY];
}

void reset(){
    for(int i = 0; i<8; i++){
        for(int j=0;j<8; j++){
            lev[i][j] = INF;
            vis[i][j] = 0;
        }
    }

}
void solve() {
    string s1, s2;
    cin>>s1>>s2;
    cout<<bfs(s1,s2)<<"\n";
}

signed main() {
    int t = 1;
    cin >> t;
    while (t--) {
        reset();
        solve();
    }

    return 0;
}
// This is krishna.

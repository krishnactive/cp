#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e8+10;

//fibbo
int dp[N];
//TOP DOWN
int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    //memoise
    return dp[n]=fib(n-1)+fib(n-2);
}
//time complexity O(N);


signed main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    //bottom approach
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<fib(n);
}
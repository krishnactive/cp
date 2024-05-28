#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long

signed main(){
    int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n&1){
            n=(ll)3*n+1;
        }
        else{
            n=n/2;
        }
        cout<<n<<" ";
    }
}
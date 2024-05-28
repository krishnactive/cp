#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define pb push_back
#define vl vector<ll>

void solve() {
    ll n, m;
    cin >> n >> m;
    vl numbers(n);
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        numbers[i] = (numbers[i] * x) % m;
    }
    string directions;
    cin >> directions;
    ll product = numbers[n-1];
    cout << product << " ";
    for (int i = 0; i < n - 1; i++) {
        if (directions[i] == 'L') {
            product = (product * numbers[i + 1]) % m;
            cout << product << " ";
        } else {
            product = (product * (m - numbers[n - i - 1])) % m;
            cout << product << " ";
        }
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
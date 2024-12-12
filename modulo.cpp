#include <bits/stdc++.h>
using namespace std;

#define int long long 

#define vc vector
#define pb push_back

#define pii pair <int, int>
#define fi first
#define se second

#define pq priority_queue

int mod = 1e9 + 7;

int fact (int n) {
    int total = 1;
    for (int i = 1; i <= n; i++) {
        total += (total % mod) * (i % mod);
        // total = total % mod;
    }
    return total;
}

signed main () {
    int n, a, b; cin >> n >> a >> b;
    int total = 0;
    int up = fact(n);
    for (int i = a; i <= b; i++) {
        int above = ((fact(n-i) % mod) * (fact(i) % mod)) % mod;
        cout << up << " " << above << endl;
        total = ((total ) + ((up / above))) ;
    }
    cout << total;
}

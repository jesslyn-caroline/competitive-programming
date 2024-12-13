#include <bits/stdc++.h>
using namespace std;

#define int long long 

#define vc vector
#define pb push_back

#define pii pair <int, int>
#define fi first
#define se second

#define pq priority_queue

signed main () {
    int n, m; cin >> n >> m;
    
    // To find the sum of found treasure by index (i, j);
    int pre[n+1][m+1]; memset(pre, 0, sizeof(pre));
    for (int i = 1; i <= n; i++) {
        string s; cin >> s;
        for (int j = 1; j <= m; j++) {
            int a = s[j-1] - '0';
            pre[i][j] = pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1] + a;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << pre[i][j] << " ";
        }
        cout << endl;
    }
    
    int q; cin >> q;
}

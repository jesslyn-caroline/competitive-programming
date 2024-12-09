#include <bits/stdc++.h>
using namespace std;

#define int long long 

#define vc vector
#define pb push_back

#define pr pair
#define fi first
#define se second

#define pq priority_queue

signed main () {
    int n, m; cin >> n >> m;
    string arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int grid[n+1][m+1]; memset(grid, 0, sizeof(grid));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 and j == 1) grid[i][j] = 1;
            else grid[i][j] = grid[i][j-1] + grid[i-1][j] - grid[i-1][j-1] + 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

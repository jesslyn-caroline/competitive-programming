#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main () {
    int n, m; cin >> n >> m;
    int grid[n][m]; memset(grid, 0, sizeof(grid));
    int centralY = n / 2 - (n % 2 == 0? 1 : 0) , centralX = m / 2 - (m % 2 == 0? 1 : 0);
    int x = centralX, y = centralY;
    for (int i = 0; i < centralY; i++) {
        for (int j = i; j < m - i; j++) {
            grid[i][j] = y;
            grid[n-i-1][j] = y;
        }
        y--;
    }
    for (int i = 0; i < centralX; i++) {
        for (int j = i; j < n - i; j++) {
            grid[j][i] = x;
            grid[j][m-i-1] = x;
        }
        x--;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

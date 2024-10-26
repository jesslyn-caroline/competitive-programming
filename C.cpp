#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main () {
    int n; cin >> n;
    vector <pair <int, int>> arr (3);
    cin >> arr[0].second >> arr[1].second >> arr[2].second;
    cin >> arr[0].first >> arr[1].first >> arr[2].first;
    
    sort(arr.begin(), arr.end(), greater<pair <int, int>>());
    for (int i = 0; i < 3; i++) {
        cout << arr[i].second << " " << arr[i].first;
        cout << endl;
    }
    string grid[2];
    cin >> grid[0] >> grid[1];
    int value[2][n]; memset(value, 0, sizeof(value));
    
    vector <pair <int, int>> possiblePoint;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 2; i++) {
            if (grid[i][j] != '#') possiblePoint.pb({i, j});
        }
    }
    
}

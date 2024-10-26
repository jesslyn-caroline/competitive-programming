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
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '#') {
                value[i][j] = -1;
            }
        }
    }
    bool up = true; // true if 0, false if 1
    for (int i = 0; i < 3; i++) {
        int j = 0;
        while (arr[i].second-- and j < n) {
            if (up and value[0][j] == 0) value[0][j] = arr[i].first;
            else if (!up and value[0][j] == 0) value[0][j] = arr[i].first;
            j++; up = !up;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << value[i][j] << " ";
        }
        cout << endl;
    }
}

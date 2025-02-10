#include <bits/stdc++.h>
using namespace std;

#define int long long 

#define vc vector

#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

#define pii pair <int, int>
#define fi first
#define se second

#define pq priority_queue

#define in(i) insert(i)


signed main () {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        
        int a[n+1], b[m];
        a[0] = -10000000000;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(b, b + m);
        
        bool pos = true;
        for (int i = 1; i <= n; i++) {
            int mini = a[i];
            int start = 0, end = m-1;
            while (start <= end) {
                int mid = (start + end) / 2;
                if (b[mid] - a[i] <= mini) {
                    if (b[mid] - a[i] >= a[i-1]) mini = b[mid] - a[i], end = mid - 1;
                    else start = mid + 1;
                }
                else start = mid + 1;
                a[i] = mini;
            }
            if (a[i] < a[i-1]) pos = false;
        }
        cout << (pos? "YES" : "NO");
        cout << endl;
    }
}

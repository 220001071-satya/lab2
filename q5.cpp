// Satya Narayan 220001070

// Time Complexicity --> O(n)
#include <bits/stdc++.h> 
using namespace std;


int main() {
    freopen("input_5.in", "r", stdin);
    freopen("output_5.out", "w", stdout);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int min1 = min(a[0] , a[1]);
        int min2 = max(a[0] , a[1]);

        for (int i = 2; i < n; i++) {
            if (a[i] <= min1) {
                min2 = min1;
                min1 = a[i];
            }
            else if (a[i] <= min2) {
                min2 = a[i];
            }
        }

        cout <<  min1 << " " << min2 << endl;
    }
}
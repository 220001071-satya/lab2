// Satya Narayan 220001070

// Time Complexicity --> O(n^2)
#include <bits/stdc++.h> 
using namespace std;

int main() {
    freopen("input_3.in", "r", stdin);
    freopen("output_3.out", "w", stdout);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }


        for (int i = 1; i < n; i++) {
            int j = i - 1;
            while (j >= 0 && a[j] > a[j + 1]) {
                swap(a[j] , a[j + 1]);
                j--;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;

    }
}
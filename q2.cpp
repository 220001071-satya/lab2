// Satya Narayan 220001070

// Time Complexicity --> O(n^2)
#include <bits/stdc++.h> 
using namespace std;

int main() {
    freopen("input_2.in", "r", stdin);
    freopen("output_2.out", "w", stdout);

    int t;
    cin >> t;

    while (t--) {
        int n , m;
        cin >> n >> m;

        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        

        for (int i = m - 1; i < n; i++) {
            int j = i - 1;
            while (j >= 0 && A[j] > A[j + 1]) {
                swap(A[j] , A[j + 1]);
                j--;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << A[i] << ' ';
        }
        cout << endl;

    }
}
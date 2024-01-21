// Satya Narayan 220001070

#include <bits/stdc++.h> 
using namespace std;

// time complexicity O(n + m)


vector<int> merge(vector<int> &A, vector<int> &B)
{
    int n = A.size();
    int m = B.size();
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (A[i] <= B[j])
        {
            ans.push_back(A[i]);
            i++;
        }
        else
        {
            ans.push_back(B[j]);
            j++;
        }
    }
    while (i < n)
        ans.push_back(A[i]), i++;
    while (j < m)
        ans.push_back(B[j]), j++;
    return ans;
}

int main()
{

    freopen("input_1.in", "r", stdin);
    freopen("output_1.out", "w", stdout);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> A(n), B(m);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < m; i++)
            cin >> B[i];

        vector<int> ans = merge(A, B);
        cout<<endl;
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}
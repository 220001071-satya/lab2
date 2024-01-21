// satya narayan 220001071

// Time Complexicity --> O(n+m)

#include <bits/stdc++.h> 
using namespace std;

vector<int> Union(vector<int> &A, vector<int> &B)
{
    int n = A.size();
    int m = B.size();
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            ans.push_back(A[i]);
            i++;
            while (i < n && A[i - 1] == A[i])
                i++;
        }
        else if (A[i] > B[j])
        {
            ans.push_back(B[j]);
            j++;
            while (j < m && B[j - 1] == B[j])
                j++;
        }
        else
        {
            ans.push_back(A[i]);
            i++, j++;
            while (i < n && A[i - 1] == A[i])
                i++;
            while (j < m && B[j - 1] == B[j])
                j++;
        }
    }
    while (i < n)
    {
        ans.push_back(A[i]), i++;
        while (i < n && A[i - 1] == A[i])
            i++;
    }
    while (j < m)
    {
        ans.push_back(B[j]), j++;
        while (j < m && B[j - 1] == B[j])
            j++;
    }
    return ans;
}

int main()
{
    

    freopen("input_1(b).in", "r", stdin);
    freopen("output_1(b).out", "w", stdout);


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

        vector<int> ans = Union(A, B);
        cout << endl;
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}
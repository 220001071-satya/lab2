// satya narayan 220001071

// Time Complexicity --> O(n+m)


#include <bits/stdc++.h> 
using namespace std;




vector<int> Intersection(vector<int> &A, vector<int> &B)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < A.size() && j < B.size())
    {
        if (A[i] == B[j])
            ans.push_back(A[i]);
        if (A[i] <= B[j])
        {
            i++;
            while (i < A.size() && A[i - 1] == A[i])
                i++;
        }
        else
        {
            j++;
            while (j < B.size() && B[j - 1] == B[j])
                j++;
        }
    }
    return ans;
}

int main()
{
    
    freopen("input_1(c).in", "r", stdin);
    freopen("output_1(c).out", "w", stdout);

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

        vector<int> ans = Intersection(A, B);
        
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}
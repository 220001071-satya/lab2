// Satya Narayan 220001070

// Time Complexicity --> O(n^2)
#include <bits/stdc++.h> 
using namespace std;


int util2(int a, int b, int c)
{
    if ((a <= b && b <= c) || (c <= b && b <= a))
        return b;
    else if ((b <= a && a <= c) || (c <= a && a <= b))
        return a;
    else
        return c;
}

int partition(vector<int> &v, int low, int high)
{
    int pivot = util2(v[low], v[(low + high) / 2], v[high]);
    int i = low - 1, j = high + 1;

    while (true)
    {
        i++;
        while (v[i] < pivot)
        {
            i++;
        }
        j--;
        while (v[j] > pivot)
        {
            j--;
        }
        if (i >= j)
            return j;
        else
        {
            swap(v[i], v[j]);
        }
    }
}

void Sort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;

    int pivot = partition(v, low, high);

    Sort(v, low, pivot);
    Sort(v, pivot + 1, high);
}

int main()
{
    
    freopen("input_6.in", "r", stdin);
    freopen("output_6.out", "w", stdout);


    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        Sort(v, 0, n - 1);

        
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
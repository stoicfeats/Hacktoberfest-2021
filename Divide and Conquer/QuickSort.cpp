#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define all(v) v.begin(), v.end()

int partition(vector<int> &v, int s, int e)
{
    int pivot = v[e]; //Base element according to which sorting revolves. It can be any value.
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[e]);
    return i + 1;
}

void quickSort(vector<int> &v, int s, int e)
{
    //Base Case
    if (s >= e)
        return;

    //Rec Case
    int p = partition(v, s, e);
    quickSort(v, s, p - 1);
    quickSort(v, p + 1, e);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int s = 0;
    int e = n - 1;
    quickSort(v, s, e);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}
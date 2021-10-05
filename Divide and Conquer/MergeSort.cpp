#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define all(v) v.begin(), v.end()

void merge(vector<int> &v, int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;
    vector<int> temp;
    while (i <= mid and j <= e)
    {
        if (v[i] < v[j])
        {
            temp.push_back(v[i]);
            i++;
        }
        else
        {
            temp.push_back(v[j]);
            j++;
        }
    }

    //Copy remaining elemensts from both arrays one by one using while loop

    while (j <= e)
    {
        temp.push_back(v[j]);
        j++;
    }

    while (i <= mid)
    {
        temp.push_back(v[i]);
        i++;
    }

    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        v[idx] = temp[k];
        k++;
    }
}

void mergeSort(vector<int> &v, int s, int e) //It works as depth first manner.
{
    //BASE CASE
    if (s >= e)
    {
        return;
    }

    //REC CASE
    int mid = (s + e) / 2;
    mergeSort(v, s, mid);
    mergeSort(v, mid + 1, e);
    return merge(v, s, e);
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
    mergeSort(v, s, e);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}

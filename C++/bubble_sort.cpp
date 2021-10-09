#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int pass = 1;
    while (pass<n-1)
    {
        for (int i = 0; i < n-pass; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }       
        }
        pass++;
    }
    

    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
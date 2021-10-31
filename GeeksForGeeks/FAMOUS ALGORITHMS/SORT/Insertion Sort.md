```
#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int i,j,key;
    for(i=1; i<n; ++i)
    {
        key = arr[i];
       
        j = i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }

}

void print(int *arr, int n)
{ 
    int i;
    for(i=0; i<n; ++i)
    {
        cout<<arr[i]<<" ";
    }
}

int main() 
{
   int arr[100000],n;
   cin>>n;
   for(int i=0; i<n; ++i)
   {
       cin>>arr[i];
   }
   sort(arr,n);
   print(arr,n);
}
```

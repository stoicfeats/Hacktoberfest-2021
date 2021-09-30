```
#include <iostream>
#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
      cin>>arr[i];
    }
    int i,j,min;
    for(i=0;i<num-1;i++)
    {
        min=i;
        for(j=i+1;j<num;j++)  
        {  
            if(arr[j]<arr[min])
            {
                min=j;
                swap(arr[min],arr[i]);  
            }
        }
    }
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<endl;
    }
	return 0;
}
```

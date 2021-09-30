```
#include<bits/stdc++.h> 
using namespace std;
void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
} 
void solve(int arr[],int num){
	for(int i=0;i<num-1;i++){
       for(int j=0;j<num-i-1;j++){
		   if(arr[j] > arr[j+1]){
			   swap(&arr[j],&arr[j+1]);
		   }
	   }
	}
	for(int i=0;i<num;i++)cout<<arr[i]<<endl;
}
int main() {
	int num;
	cin >> num;
	int arr[num];
	for(int i=0;i<num;i++)cin >> arr[i];
	solve(arr,num);
}
```

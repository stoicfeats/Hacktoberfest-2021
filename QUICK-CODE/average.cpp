#include <iostream>
using namespace std;

double findAvg(int arr[], int n){
  double ans;
  int sum=0;
  for(int i=0;i<n;i++){
    sum += arr[i];
  }
  ans = sum*1.0/n;
  return ans;
}

int main(){
  int arr[5] = {11,2,31,19,45};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<findAvg(arr,n);
}

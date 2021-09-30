#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int arr[n];
int nge[n];
for(int i=0;i<n;i++) cin>>arr[i];
int k;cin>>k;
// finding next greater of all element but storing indexes not values
    stack<int> stack;
    nge[n-1] = n;
    stack.push(n-1);

    for(int i=n-2;i>=0;i--){
        while(!stack.empty() && arr[i]>=arr[stack.top()]) stack.pop();
        nge[i] = stack.empty() ? n : stack.top();
        stack.push(i);
    }

    // for (auto i : nge) cout << i <<endl; 
    // i+k = window from current element, i =0,k=4; so window will be 0-4
    int j=0;
    for(int i=0;i<=n-k;i++){
        if(j<i){
            j = i; 
        }
        
        while(nge[j]<i+k){
            j = nge[j]; // if next greater element is in the window then j will move to that element and find it's ngr 
        }
        cout<<arr[j]<<endl;
    }
}

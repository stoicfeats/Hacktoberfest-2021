// question link : https://www.pepcoding.com/resources/online-java-foundation/stacks-and-queues/next-greater-element-official/ojquestion
// video solution : https://www.youtube.com/watch?v=rSf9vPtKcmI

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> stack;
    int nge[n];
    nge[n-1] = -1;
    stack.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        while(!stack.empty() && arr[i]>=stack.top()) stack.pop();
        nge[i] = stack.empty() ? -1 : stack.top();
        stack.push(arr[i]);
    }

    for (auto i : nge) cout << i <<endl;
}

// gfg link : https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    stack<int> s;
    for(int i=0;i<n;i++){
           
           while(!s.empty() && arr[i]>=arr[s.top()])
           {
               s.pop();
           }
           
           int val = (s.empty())?i+1:i-s.top();
           v.push_back(val);
           s.push(i);
       }
       for(auto i:v){
           cout<<i<<endl;
       }
    }

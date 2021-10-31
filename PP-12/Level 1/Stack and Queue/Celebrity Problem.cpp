// this cpp code is also correct but the inputs provided from their side is messed up, instead of int we are getting array of strings,couldn't figure out a way to input it acc to the compiler

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n][n];

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
                cin>>arr[j][k];
            }
        }

    stack<int> st;
    for(int i=0;i<n;i++){
        st.push(i);
    }    

    while(st.size()>1){
        int i = st.top();
        st.pop();
        int j = st.top();
        st.pop();

        if(arr[i][j]==1){
            st.push(j);
        }else{
            st.push(i);
        }
    }

    int pot = st.top();
    st.pop();
    bool flag = true;
    for(int i=0;i<n;i++){
        if(i!=pot){
            if(arr[i][pot] == 0 || arr[pot][i] == 1){
                flag = false;
                break;
            }
        }
    }

    if(flag==true)
        cout<<pot;
    else    
        cout<<"none";
}
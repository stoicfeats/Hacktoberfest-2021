
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    stack<int> stack;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            stack.push(str[i]);
        }else if(str[i]==')'){
            if(stack.empty()){
                cout<<"false";
                return 0;
            }else if(stack.top()!='('){
                cout<<"false";
                return 0;
            }else{
                stack.pop();
            }
        }else if(str[i]=='}'){
            if(stack.empty()){
                cout<<"false";
                return 0;
            }else if(stack.top()!='{'){
                cout<<"false";
                return 0;
            }else{
                stack.pop();
            }
        }else if(str[i]==']'){
            if(stack.empty()){
                cout<<"false";
                return 0;
            }else if(stack.top()!='['){
                cout<<"false";
                return 0;
            }else{
                stack.pop();
            }
        }
    }
if(stack.empty()){
    cout<<"true";
}else{
    cout<<"false";
}
}
        
        
        
       
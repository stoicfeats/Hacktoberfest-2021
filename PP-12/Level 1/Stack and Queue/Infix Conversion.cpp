// getting some silly syntax errors, after wasting a whole day I moved on

#include<bits/stdc++.h>
using namespace std;

int operation(int v1, int v2, char ch){
    if(ch == '+'){
        return v1+v2;
    }else if(ch == '-'){
        return v1-v2;
    }else if(ch == '/'){
        return v1/v2;
    }else if(ch == '*'){
        return v1*v2;
    }
}

int main(){
string str;
getline(cin,str);

stack<string> op;
stack<int> val;

for(int i=0;i<str.size();i++){
    if(str[i]=='('){
        op.push(str[i]);
    }else if(isdigit(str[i])){
        val.push(str[i]-'0');
    }else if(str[i]==')'){
        while(op.top()!='('){
            char ch = op.pop();
            int val2 = val.pop();
            int val1 = val.pop();

            int res = operation(v1,v2,ch);
            val.push(res);
        }
        op.pop();
    }else if(str[i]=='+' || str[i]=='-' || str[i]=='/' || str[i]=='*'){
        while(!op.empty() && op.top() != '(' && precedence(str[i])<precedence(op.top())){
            char ch = op.pop();
            int val2 = val.pop();
            int val1 = val.pop();

            int res = operation(v1,v2,ch);
            val.push(res);
        }
        op.push(str[i]); 
    }
}

 while(!op.empty()){
            char ch = op.pop();
            int val2 = val.pop();
            int val1 = val.pop();

            int res = operation(v1,v2,ch);
            val.push(res);
        }
cout<<val.top();
}

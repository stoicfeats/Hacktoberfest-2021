// question : https://www.pepcoding.com/resources/online-java-foundation/stacks-and-queues/duplicate-brackets-official/ojquestion#
// solution : https://www.youtube.com/watch?v=aMPXhEdpXFA

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    stack<int> stack;
    for(int i=0;i<str.length();i++){
        if(str[i]!=')'){
            stack.push(str[i]);
        }else{
            if(stack.top()=='('){
                cout<<"true";
                return 0 ;
            }else{
                while(stack.top()!='('){
                    stack.pop();
                }
                stack.pop();
            }
        }
    }
    cout<<"false";
}
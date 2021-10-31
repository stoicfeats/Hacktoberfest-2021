### Question Link : https://practice.geeksforgeeks.org/problems/valid-expression1025/1/?problemStatus=unsolved&difficulty[]=1&page=1&category[]=Stack&query=problemStatusunsolveddifficulty[]1page1category[]Stack#


### Solution Video : https://www.youtube.com/watch?v=uuE2pEjLiEI

SOLUTION 1 : (ACCEPTED)

```
bool valid(string str)
{
    stack<int> stack;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            stack.push(str[i]);
        }else if(str[i]==')'){
            if(stack.empty()){
                return 0;
            }else if(stack.top()!='('){
                return 0;
            }else{
                stack.pop();
            }
        }else if(str[i]=='}'){
            if(stack.empty()){
                return 0;
            }else if(stack.top()!='{'){
                return 0;
            }else{
                stack.pop();
            }
        }else if(str[i]==']'){
            if(stack.empty()){
                return 0;
            }else if(stack.top()!='['){
                return 0;
            }else{
                stack.pop();
            }
        }
    }
if(stack.empty()){
    return "1";
}else{
    return "0";
}
}
```

SOLUTION 2 : (ACCEPTED) 
>short and precise 

```
bool valid(string S)
{
    stack<char> st;
    
    for(auto x: S)
    {
        if(x == '(' or x == '{' or x == '[')
        {
            st.push(x);
        }
        else
        {
            if(!st.empty())
            {
                if(st.top() == '(' and x == ')')
                {
                    st.pop();
                }
                else if(st.top() == '{' and x == '}')
                {
                    st.pop();
                }
                else if(st.top() == '[' and x == ']')
                {
                    st.pop();
                }
            }
            else
            {
                return 0;
            }
        }
    }
    
    return st.empty() ? 1 : 0;
}
```

# Parenthesis Checker

```

// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    stack<char> s;
    int len = x.length(),i;
    
    if(len%2!=0) return false;
    
    for(i=0;i<len;i++){
        if(x[i]=='{' || x[i]=='(' || x[i]=='[')
            s.push(x[i]);
        else if (x[i]=='}' || x[i]==')' || x[i]==']')
            if(s.empty())
                return false;
            else if (x[i]=='}' && s.top() !='{')
                return false;
            else if (x[i]==']' && s.top() !='[')
                return false;
            else if (x[i]==')' && s.top() !='(')
                return false;
            else 
                s.pop();
        
    }
    if(s.empty())
        return true;
    else return false;
}
```

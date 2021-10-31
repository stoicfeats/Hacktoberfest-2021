// recursion will be used and whenever we will encounter the mid, it will return from there and push all above elements except the mid one baecause we will not return anything;
// Question Link : https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1/?category[]=Stack&category[]=Stack&page=1&query=category[]Stackpage1category[]Stack#


class Solution
{
    public:
    
    void mid(stack<int>&s, int n, int curr){
        int res = s.top();
        s.pop();
        
        if(curr == n/2) return;
        
        mid(s,n,curr+1);
        s.push(res);
    }
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        mid(s,sizeOfStack,0);
    }
};

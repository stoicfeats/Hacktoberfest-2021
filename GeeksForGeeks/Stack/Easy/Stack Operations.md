### Questions Link : https://practice.geeksforgeeks.org/problems/stacks-operations/1/?category[]=Stack&category[]=Stack&page=1&query=category[]Stackpage1category[]Stack#

Solution : (ACCEPTED)

> compiler is in java but no difference

```
// Helper class to implement functions
// insert : to insert element to stack
// remove : to pop element from stack
// headOf_Stack : to return top of stack
// find : to find the element in stack

class Geeks
{
    // Function to insert element to stack
    public static void insert(Stack<Integer> st, int x)
    {
        st.push(x);
        
    }
    
    // Function to pop element from stack
    public static void remove(Stack<Integer> st)
    {
        int x = st.pop();
        
    }
    
    // Function to return top of stack
    public static void headOf_Stack(Stack<Integer> st)
    {
        int x = st.peek();
        System.out.println(x + " ");
    }
    
    // Function to find the element in stack
    public static void find(Stack<Integer> st, int val)
    {
    
        if(st.contains(val)){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
        
    }
}
```
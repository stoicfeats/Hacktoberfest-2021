### Question Link : https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1/?category[]=Stack&category[]=Stack&problemStatus=unsolved&page=1&query=category[]StackproblemStatusunsolvedpage1category[]Stack#


SOLUTION : (ACCEPTED)

```
//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
arr[++top1] = x;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
arr[--top2] = x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
return top1 == -1?-1 : arr[top1--];
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
return top2 == size ? -1 : arr[top2++];
}
```
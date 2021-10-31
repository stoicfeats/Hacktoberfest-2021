## How to reverse a int number without using a function : 
### Video : https://youtu.be/qx9YCuB4eZw

``` 
// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}

```

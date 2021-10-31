## Question Link : https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1#

## Video : <br>
> Logic : https://www.youtube.com/watch?v=HWJ9kIPpzXs&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=32 <br>
> Code Walkthrough :  https://youtu.be/JPfOOtk9qug

### SOLUTION : (ACCEPTED) 

```
void stockBuySell(int price[], int n) {
    // code here
    int i=0, buy=0, sell=0;
    while(i<n-1)
    {
        // for decreasing stock like 7, 6, 5, 8, 10, 15, 19, 21, 9;
        while(i<n-1&& price[i+1]<=price[i]) i++;
        if(i==n-1) break;
        
        // once the stock start rising, after 5 stock went up    
        buy=i++;
        while(i<n&& price[i-1]<=price[i]) i++;
        sell=i-1;
        
        // end of one buy and sell 8-21 or (3 7)
        cout<<"("<<buy<<" "<<sell<<")"<<" ";
    }
    // if no buy or sell occured so no profit
    
    if(buy==0&&sell==0) cout<<"No Profit";
    cout<<endl;
}
```


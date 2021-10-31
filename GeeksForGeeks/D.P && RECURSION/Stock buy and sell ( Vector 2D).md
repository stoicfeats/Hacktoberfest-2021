## Question Link : https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1/?company[]=Pubmatic&page=1&query=company[]Pubmaticpage1# <br>

## Solution Video : 
> Self (Code Walkthrough) :

SOLUTION : (ACCEPTED) 
Issue which can come : returning 2D vector 

```
class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> price, int n){
        vector<vector<int>> kit_kat;
        
        for(int i=1;i<n;i++)
        {
            vector<int> waffers;
            if(price[i-1]<price[i])
            {
                waffers.push_back(i-1);
                i++;
                while(i<n) 
                {
                    if(price[i-1]<=price[i])
                    {
                        i++;
                    }
                    else 
                        break;
                }
            waffers.push_back(i-1);
            kit_kat.push_back(waffers);
                
            }
            
            
        }
        
        return kit_kat;
        
    }
    
};
```

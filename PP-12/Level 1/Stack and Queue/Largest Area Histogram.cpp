#include <bits/stdc++.h>
using namespace std;


long long getMaxArea(long long arr[], int n)
    {

        stack<int>s;
        long long res=0;
        long long curr=0;
        for(int i=0;i<n;i++) 
        { 
            while(s.empty()==false && arr[s.top()]>=arr[i])
            {
                int tp=s.top();
                s.pop();
                curr= arr[tp]*(s.empty()?i:(i-s.top()-1));
                res=max(curr,res);
            }
            s.push(i);
        }
        
        while(s.empty()==false)
        {
            int tp=s.top();
            s.pop();
            curr=arr[tp]*(s.empty()?n:(n-s.top()-1));
            res=max(res,curr);
        }
        return res;
    }
    
int main()
 {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<getMaxArea(arr, n)<<endl;
    
	return 0;
}


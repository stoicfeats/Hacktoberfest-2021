## Question Link : https://www.codechef.com/JUNE21C/problems/SHROUTE <br>

Solution : ( Accepted ) 
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int hi,lo;
        cin>>hi>>lo;
        int arr1[hi];
        int arr2[lo];
        for(int i=0;i<hi;i++)
        cin>>arr1[i];
        for(int i=0;i<lo;i++)
        cin>>arr2[i];
        vector <int> vec1,vec2;
        int one = -1;
        int two = -1;
        int max = 1e9;
        for(int i=0;i<hi;i++){
            if(arr1[i]==1){
                vec1.push_back(0);
                one=i;
            }else if(one ==-1){
                vec1.push_back(max);
            }else if(arr1[i]==2){
                vec1.push_back(0);
            }            
            else{
                vec1.push_back(i-one);
            }
        }
        
        for(int i=hi-1;i>=0;i--){
            if(arr1[i]==2){
                vec2.push_back(0);
                two=i;
            }
            else if(two==-1 && arr1[i]==0){
                vec2.push_back(max);
            }else if(arr1[i]==1){
                vec2.push_back(0);
            }else{
                vec2.push_back(two-i);
            }
        }
        reverse(vec2.begin(),vec2.end());
        for(int i=0;i<lo;i++){
            int curr=arr2[i];
            if(arr1[0]!=0 && arr1[curr-1]!=0)
            cout<<"0"<<" ";
            else if(curr==1)
            cout<<"0"<<" ";
            else{
                int ans =0;
                if(vec1[curr-1]==max && vec2[curr-1]==max){
                    ans = -1;
                }
                else{
                    ans=min(vec1[curr-1],vec2[curr-1]);
                }
                cout<<ans<<" ";
            }
        }
    
        cout<<endl;
    }
	
	return 0;
}
```

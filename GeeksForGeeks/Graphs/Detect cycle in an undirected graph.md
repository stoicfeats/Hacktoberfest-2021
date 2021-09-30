## Question : https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1# 

## Video Solution : https://www.youtube.com/watch?v=A8ko93TyOns&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=8 <br>

Solution : (Accepted)

> Code Walkthrough will be uploaded soon for this and previous videos

```
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution 
{
    public:
    
    bool checkCycle(int s, int V, vector<int>adj[], vector<int>& visited)
    {

        vector<int> parent(V, -1);
        queue<pair<int,int>> q;

        visited[s] = true;
        q.push({s, -1});

        while(!q.empty()){

        int node = q.front().first;
        int par = q.front().second;
        q.pop();    

        for(auto it : adj[node]){

            if(!visited[it]){
                visited[it] = true;
                q.push({it,node});
            }
            else if(par != it)
                return true;
        }
  
    }
    return false;
}

public:
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(checkCycle(i, V, adj, vis)) return true;
            }
        } 

        return false;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends
```
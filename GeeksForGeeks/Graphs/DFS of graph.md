## Question : https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#

### Video Solution : https://www.youtube.com/watch?v=uDWljP2PGmU&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=7


Solution 1 : ( Shows SGE after debugging) Striver's Solution

```
class Solution 
{
    public:

    void dfs(int node, vector<int>& vis, vector<int> adj[], vector<int> &dfs){
        dfs.push_back(node);
        vis[node] = 1;

        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(node,vis,adj,dfs);
            }
        }
    }

	// Function to return a list containing the DFS traversal of the graph.
	
    vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int> dfs;
        vector<int> vis(V,false);
        
            dfs(0, vis, adj, dfs);
        
        return dfs;
    }

};

```

Solution 2 : ( Accepted - Used other solution)

```
vector<int>dfsOfGraph(int V, vector<int> adj[])
{
vector<bool> vis(V, false);
vector<int> res;
dfs(0, adj, V, vis, res);
return res;
}

void dfs(int v, vector<int> adj[], int V, vector<bool> &vis, vector<int> &res)
{
vis[v] = true;
res.push_back(v);
for(int neigh : adj[v])
if(!vis[neigh])
dfs(neigh, adj, V, vis, res);
}

```




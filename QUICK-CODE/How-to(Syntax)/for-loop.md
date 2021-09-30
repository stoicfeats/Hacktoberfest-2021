### How to automate for loop 

> one and only line you need to print an array is : for (auto i : nge) cout << i <<endl;

using *auto* haha or range-for loop

```
for(auto it : adj[node]){
    if(!vis[it]){
        q.push(it);
        vis[it] = true/1;
    }
}
```

```
 int main() 
{
    // Iterating over whole array

    std::vector<int> v = {0, 1, 2, 3, 4, 5};
    for (auto i : v)
        std::cout << i << ' ';
      
      
    // the initializer may be a braced-init-list
    for (int n : {0, 1, 2, 3, 4, 5})
        std::cout << n << ' ';
      
   
    // Iterating over array
    int a[] = {0, 1, 2, 3, 4, 5};     
    for (int n : a)
        std::cout << n << ' ';
      
      
    // Just running a loop for every array
    // element
    for (int n : a)  
        std::cout << "In loop" << ' ';
      
      
    // Printing string characters
    std::string str = "Geeks";
    for (char c : str) 
        std::cout << c << ' ';
          
  
    // Printing keys and values of a map
    std::map <int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
    for (auto i : MAP)
        std::cout << '{' << i.first << ", " 
                  << i.second << "}\n";
}
```
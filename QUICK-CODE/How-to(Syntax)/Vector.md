## 1. How to define a vector : 
```vector<long long> arr(n,0);``` <br
>
## 2. How to return a vector from function in C++  

> Yes, we can return vector/list normally like a int and it will return the whole array but you need to make sure that it receives it nicely.<br>

```return <vector_name>;```<br>

> If shows error in returning of vector then check it's placement, chances are it would be out of the function.

## 3. How to define push_back globally with any variable or name 
```define pb push_back```

## 4. Boolean vectors

#### for bfs code (gfg) : https://www.geeksforgeeks.org/bfs-using-stl-competitive-coding/

> declare

1-D: ```vector<bool> v;``` <br>
2-D : ```vector<vector<int>> g;```

> assign values on declartion

```v.assign(n,false);```<br>
fill the vector with false <br> 
where n being the size and false being the value to be filled

> assign 1-d vectors to a 2-D vector ( kit kat and waffers concept)

```vector<vector<<int>> g;```<br>
```g.assign(n,vector<int>());```

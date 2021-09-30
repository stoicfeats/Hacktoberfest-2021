## 1.Declaration : 
`map<int int> m`

## 2. Filling key value pair :
`for(int i=0;i<n;i++)
    m[arr[i]]++;` 

## 3. Iteration :
```
for(auto it : m)
    cout<<it.first      // for key
    cout<<it.second     // for value
```

## 4. How to return :

1. Make a pair first `pair<int int> p;`
2. added values to p.first and p.second;
3. return p;

```
for(auto i : m)   
            if(i.second!=1)
            {
                p.first = i.first;
                p.second = i.second;
            }    
        return p;
```


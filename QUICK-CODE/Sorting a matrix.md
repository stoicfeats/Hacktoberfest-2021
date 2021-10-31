## SORTING A MATRIX ( using additional space)
```
#include <bits/stdc++.h> 
using namespace std; 

// function to sort the given matrix 
void sortMat(int mat[SIZE][SIZE], int n) 

{ 
    // temporary matrix of size n^2 
    int temp[n * n]; 
    int k = 0; 
  
    // copy the elements of matrix one by one into  temp 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            temp[k++] = mat[i][j]; 
  
    // sort temp[] 
    sort(temp, temp + k); 
      
    // copy the elements of temp[] one by one in mat[][] 
    k = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            mat[i][j] = temp[k++]; 
} 
// function to print the sorted matrix
void printMat(int mat[SIZE][SIZE], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
            cout << mat[i][j] << " "; 
        cout << endl; 
    } 
} 
```


  
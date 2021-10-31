## Binary Array Sorting
Question : https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1# <br>
Video : https://youtu.be/w5HVAs2xYCM

```
#include <iostream>
using namespace std;

void binSort(int A[], int N);


int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}

// Function to sort the array A[]
// A[]: input array
// N: input array
void binSort(int A[], int N)
{
   int left=0;
   int right = N-1;
   
   for(int i=0;i<N;i++){
       if(A[left]==1){
           swap(A[left],A[right]);
           right--;
       }
       else
            left++;
        
   }
}

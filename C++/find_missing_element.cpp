/*
 * Question: Find the missing element in the array
 * 
 * Testcase 1:
 * Input: [1, 2, 3, 4, 6]
 * Output: 5
 * 
 * */

#include <bits/stdc++.h>
using namespace std;

// Function to find missing element in the array
int missingElement(vector<int>& v, int n){
	
	// Sum of n+1 elements
	int sum = ((n+1)*(n+2))/2;
	
	// Sum of elements int the array
	int sum_array = 0;
	for(auto &i: v) sum_array+=i;
	
	//Reqd number = sum - sum_array
	return sum - sum_array;
}
  
int main() { 
	
	// Input
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &i: v) cin >> i;
	
	cout << missingElement(v, n) << endl;
} 


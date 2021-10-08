//Dynamic Programming
//nth Catalan Number
//Using dynamic programming
//Time : O(n^2)
#include<bits/stdc++.h>
using namespace std;
unsigned long int nthcatalanno(unsigned int n)
{
	// Table to store results of subproblems 
	unsigned long int catalan[n+1];
	//Initialize first two catalan no
	catalan[0]=catalan[1]=1;
	// Fill entries in catalan[] using recursive formula
	for(int i=2;i<=n;i++)
	{
		catalan[i]=0;
		for(int j=0;j<i;j++)
		{
			catalan[i]+=catalan[j]*catalan[i-j-1];
		}
	}
	//return last entry
	return catalan[n];
}
int main()
{
	int n=10;
	for(int i=0;i<=n;i++)
	{
		cout<<nthcatalanno(i)<<" ";
	}
	return 0;
}

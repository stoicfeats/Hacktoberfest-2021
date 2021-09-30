#include<bits/stdc++.h> 
using namespace std; 
int pow(int x, unsigned int y) 
{ 
    int res = 1; 
    while (y > 0) {  
        if (y & 1) 
            res = res * x;
        y = y >> 1; 
        x = x * x; 
    } 
    return res; 
} 
int order(int x) 
{ 
    int n = 0; 
    while (x) 
    { 
        n++; 
        x = x/10; 
    } 
    return n; 
}
bool armstrong(int x) 
{  
    int n = order(x); 
    int temp = x, sum = 0; 
    while (temp) 
    { 
        int r = temp%10; 
        sum += pow(r, n); 
        temp = temp/10; 
    } 
    return (sum == x); 
} 
int main() {
	int n;
	cin >> n;
	if(armstrong(n))cout<<"true";
	else cout<<"false";
}

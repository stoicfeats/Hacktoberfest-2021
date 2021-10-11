#include<iostream> 
#include<vector>
#include<string>
#include<unordered_set>
#include<cmath>
#include<algorithm>
#include<set>
#include<map>
#include<climits>
typedef long long  ll;
#define vi vector<int>
#define pii pair<int, int>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
};


struct Stack{
struct Node* top = NULL;
int min = INT_MAX;
void push(int data)
{
	struct Node* temp;
	temp = new Node();
	temp->data = data;
    if(top == NULL) {
			min = data;
		} else if(data < min) {
			temp->data = data-min;
			min = data;
		}
	temp->next= top;
    top = temp;
}
int pop()
{
	struct Node* temp;
	if (top == NULL)
	{
		return -1;
	}
	else
	{
        int f = top->data;
		temp = top;
		top = top->next;
		temp->next = NULL;
		free(temp);
        if(f < 0) {
			min = min-f;
			return min+f;
		}
		return f;
	}
}
int getMin() {
		if(top == NULL) {
			return -1;
		}
		return min;
	} 
	
bool is_empty() {
		return top == NULL;
}
};
int main() {
	Stack s;
	int n; 
    cin >> n;
	for(int i = 0; i < n; i++) {
		int a; 
        cin >> a;
		s.push(a);
	}
	while(!s.is_empty()) {
		cout <<"Minimum element is: "<< s.getMin() << "| Popped element is:  " << s.pop() << endl;
	}
    cout<<"WHEN EMPTY and .pop used:  "<<s.pop()<<endl;

}

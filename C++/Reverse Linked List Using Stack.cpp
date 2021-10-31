#include<iostream>
#include<stack>
using namespace std;
struct Node{
	int data;
	Node* next;
};

class LinkedList{
	    Node *head,*tail;
	public:
	    LinkedList()
	    {
	    	head=NULL;
	    	tail=NULL;
		}
		Node* get_head()
		{
			return head;
		}
		
		void Add_at_End(int value)
		{
			Node *temp = new Node;
			temp->data=value;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
			}
			else
			{
				tail = head;
				while(tail->next!=NULL)
				{
					tail = tail->next;
				}
				tail->next=temp;
			}
	    }
		void Add_at_Any(int value,int pos)
		{
			Node* temp1=head;
			Node* temp2=new Node;
			for(int i=0;i<pos-1;i++)
		    {
					temp1=temp1->next;
			}
			if(pos==0)
			{
				cout<<"\nAdd Node At Start First\n";
			}
			else
			{
			    temp2->data=value;
		        temp2->next=temp1->next;
			    temp1->next=temp2;
			    cout<<"\nNode Added Successfully After Given Position\n";
		    }
		}
		void Add_at_Start(int value)
		{
			Node* temp=new Node;
			temp->data=value;
			temp->next=head;
			head=temp;
			cout<<"\nNode Added Successfully At Start\n";
		}
		void Delete(int pos)
		{
			Node* temp1=head;
			Node* temp2;
			for(int i=0;i<pos-1;i++)
		    {
				temp1=temp1->next;
			}
			if(pos==0)
			{
				head = head->next;
				delete temp1;
				cout<<"\nFirst Node Deleted Successfully\n";
			}
			else if(temp1->next==tail)
			{
				temp2=temp1->next;
				tail=temp1;
				temp1->next=NULL;
				delete temp2;
				cout<<"\nLast Node Deleted Successfully\n";
			}
			else
			{
		    	temp2=temp1->next;
		    	temp1->next=temp2->next;
		        delete temp2;
		        cout<<"\nNode Deleted Successfully After Given Location\n";
		    }
		    
		}
		
		void display()
		{
			Node* temp=new Node;
            temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" --> ";
                temp=temp->next;
            }
            cout<<"Null"<<endl;
		}
		
		void ReverseLinkedList()
		{
			stack<struct Node*> S;
			Node* temp = head;
			while(temp != NULL)
			{
				S.push(temp);
				temp = temp->next;
			}
			
			temp = S.top();
			head = temp;
			S.pop();
			while(!S.empty())
			{
				temp->next = S.top();
				S.pop();
				temp = temp->next;
			}
			temp->next = NULL;
			this->display();
		}
};


int main()
{
	int choice,value,position;
	LinkedList list,list2;
	do{
	    cout<<"Press 0: Add Node At End\n";
	    cout<<"Press 1: Add Node At Start\n";
	    cout<<"Press 2: Add Node At Any Location\n";
	    cout<<"Press 3: Delete Node\n";
	    cout<<"Press 4: Display Linked List\n";
	    cout<<"Press 5: Reverse Linked List\n";
	    cout<<"Press 6: Exit\n";
	    cout<<"\nEnter Choice: ";
	    cin>>choice;
	    switch(choice)
	    {
		    case 0:
			    cout<<"\nEnter Value: ";
			    cin>>value;
			    list.Add_at_End(value);
			    break;
			case 1:
				cout<<"Enter Value: ";
		    	cin>>value;
				list.Add_at_Start(value);
				break;
		    case 2:
		    	cout<<"Enter Value: ";
		    	cin>>value;
		    	cout<<"Enter Position: ";
		    	cin>>position;
		    	list.Add_at_Any(value,position);
			    break;
		    case 3:
		    	cout<<"Enter Position: ";
		    	cin>>position;
				list.Delete(position);
			    break;
		    case 4:
		    	list.display();
		    	cout<<endl;
			    break;
			case 5:
				 cout<<"\nLinked List After Reversal is: \n";
			     list.ReverseLinkedList();				
		    case 6:
		    	cout<<"\nThank You";
			    break;
			default:
				cout<<"\nInvalid Input\n";
	   }
	   cout<<endl;
	}
	while(choice!=6);	
}

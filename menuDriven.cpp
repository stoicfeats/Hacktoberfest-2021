// This is a menu driven program which perform operations on a list .

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    char choice;
    int i;
    vector<int> storage;
    do{
        cout<<"----------------------"<<endl;
        cout<<"P - Print Numbers"<<endl;
        cout<<"A - Add a Number"<<endl;
        cout<<"M - Display Mean of the Numbers"<<endl;
        cout<<"S - Display the Smallest Number"<<endl;
        cout<<"L - Display the Largest Number"<<endl;
        cout<<"F - Find Frequency of a Number in list"<<endl;
        cout<<"C - To Clear the list"<<endl;
        cout<<"Q - Quit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){

            case 'p':
            case 'P':  if(storage.size() == 0)
                           cout<<"[] -the list is empty"<<endl;
                       else{
                           cout<<"[";
                        for(int e: storage)
                           cout<<" "<<e;
                        cout<<" ]"<<endl;
                       }

                       break;

            case 'a':
            case 'A':  int n;
                       cout<<"Enter number: ";
                       cin>>n;
                       storage.push_back(n);
                       cout<<n<<" added\n";
                       break;

            case 'm':
            case 'M':  if(storage.size() == 0)
                           cout<<"Unable to calculate the mean - no data"<<endl;
                       else{
                           cout<< fixed << setprecision(2);
                           int sum = 0;
                           for(int e : storage)
                             sum += e;
                           cout<<"Mean: "<<(double)sum/storage.size()<<endl;
                       } 
                       break;

            case 's':
            case 'S':  if(storage.size() == 0)
                           cout<<"Unable to determine smallest number - list is empty"<<endl;
                       else{
                           int small = storage[0];
                           for(int e : storage)
                             if(e < small)
                                small = e;
                           cout<<"The Smallest number is "<<small<<endl;
                       }
                       break;
            
            case 'l':
            case 'L':  if(storage.size() == 0)
                           cout<<"Unable to determine largest number - list is empty"<<endl; 
                       else{
                           int large = storage.at(0);
                           for(int e : storage)
                             if(e > large)
                                large = e;
                           cout<<"The Largest number is "<<large<<endl;                           
                       }
                       break;

            case 'f':
            case 'F':  if(storage.size() == 0)
                           cout<<"Unable to Search - list is empty"<<endl; 
                       else{
                           int count = 0;
                           int n;
                           cout<<"Enter number: ";
                           cin>>n;
                           for(int e : storage)
                              if(e == n)
                                 count++;
                           cout<< "Frequency: "<<count<<endl;
                       }
                       break;

            case 'c':
            case 'C':  storage.clear();
                       cout<<"List Cleared"<<endl;
                       break;
            
            case 'q':
            case 'Q':  cout<<"Goodbye..."<<endl;
                       break;

            default: cout<<"Unknown Selection, Please try again"<<endl;
        }

    }while(choice!='Q' && choice!='q');
}

// SAMPLE OUTPUT
/*
    ----------------------
    P - Print Numbers
    A - Add a Number
    M - Display Mean of the Numbers       
    S - Display the Smallest Number       
    L - Display the Largest Number        
    F - Find Frequency of a Number in list
    C - To Clear the list
    Q - Quit
    Enter your choice: A
    Enter number: 23
    23 added
    ----------------------
    P - Print Numbers
    A - Add a Number
    M - Display Mean of the Numbers       
    S - Display the Smallest Number       
    L - Display the Largest Number        
    F - Find Frequency of a Number in list
    C - To Clear the list
    Q - Quit
    Enter your choice: A
    Enter number: 12 
    12 added
    ----------------------
    P - Print Numbers
    A - Add a Number
    M - Display Mean of the Numbers       
    S - Display the Smallest Number       
    L - Display the Largest Number        
    F - Find Frequency of a Number in list
    C - To Clear the list
    Q - Quit
    Enter your choice: s
    The Smallest number is 12
    ----------------------
    P - Print Numbers
    A - Add a Number
    M - Display Mean of the Numbers       
    S - Display the Smallest Number       
    L - Display the Largest Number        
    F - Find Frequency of a Number in list
    C - To Clear the list
    Q - Quit
    Enter your choice: q
    Goodbye...
    PS D:\C++\Challange>
*/  

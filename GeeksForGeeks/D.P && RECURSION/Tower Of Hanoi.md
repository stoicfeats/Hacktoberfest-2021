### Question Link : https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1#

### Solution Video : https://www.youtube.com/watch?v=R7qja_gZrvI <br>

Solution 1 : ( Accepted )

```
class Solution
{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    #define ll long long
    long long toh(int N, int from, int to, int aux) {
        if(N == 1){
            cout<<"move disk 1 from rod "<< from << " to rod " << to << endl;
            return 1;
        }
        ll count = toh(N - 1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        count += toh(N - 1, aux, to, from);
        return count + 1;
    }

};
```

SOLUTION 2 : ( ACCEPTED )

```
class Solution
{
    void towerOfHanoi(int N, int from, int to, int aux, long long &moves)
    {
        if(N == 1)
        {
            cout << "move disk 1 from rod "<< from << " to rod " << to << endl;
            
            moves++;
            
            return;
        }
    
        towerOfHanoi(N-1, from, aux, to, moves);
        
        moves++;
        
        cout << "move disk "<< N << " from rod "<< from << " to rod " << to << endl;
        
        towerOfHanoi(N-1, aux, to, from, moves);
    }
    
    public:
    long long toh(int N, int from, int to, int aux) 
    {
        long long moves = 0;
        
        towerOfHanoi(N, from, to, aux, moves);
        
        return moves;
    }

};
```
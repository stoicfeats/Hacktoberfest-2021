### Question Link : https://practice.geeksforgeeks.org/problems/maximum-intervals-overlap5708/1#

### Solution Video : 


SOLUTION : (ACCEPTED)
```
class Solution{
	
	public:
	vector<int> findMaxGuests(int Entry[], int Exit[], int n)
	{
	sort(Entry, Entry+n);
	sort(Exit, Exit+n);

    int guest = 1, max_guest = 1, time = Entry[0];
    int i=1,j=0;
    while(i<n && j<n){
        if(Entry[i]<=Exit[j]){
            guest++;

            if(guest>max_guest){
                max_guest = guest;
                time  = Entry[i];
            }
        i++;
        }else{
            guest--;
            j++;
        }
    }

    vector<int> res;
    res.push_back(max_guest);
    res.push_back(time);
    return res;
	}

};
```
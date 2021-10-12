#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int Select(int n,int arr[],int k){
    int d = ceil(n/5.0);        //No of groups of size 5
    int med[d];                         //array for medians

    for (int i = 0; i < n; i+=5)        
    {   if(n>=5){
            sort(arr+i,arr+i+5);
            med[i/5]=arr[i+2];
        }
        else{
            sort(arr+i,arr+i+n);
            med[i/n]=arr[i+(n-1)/2];
        }
    }
    
    sort(med,med+d);
    int p = med[(d-1)/2];
    int s[n],l[n],e[n];
    int lenl=0,lens=0,lene=0;
    
    for (int  i=0,j=0,b=0,q=0; i < n; i++)
    {
        if(arr[i]<p){
            s[j++]=arr[i];
            lens++;
        }
        else if(arr[i]==p){
            e[q++]=arr[i];
            lene++;
        }
        else{
            l[b++]=arr[i];
            lenl++;
        }
    }
    if(lenl==k-1){
        return p;
    }
    else if(lenl>k-1){
        return Select(lenl,l,k);
    }
    else{
        return Select(lens,s,k-lenl-lene);
    }

    
}

int main(){
   
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<Select(n,arr,k)<<endl;
    return 0;
}

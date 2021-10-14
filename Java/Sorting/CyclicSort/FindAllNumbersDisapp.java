import java.util.*;
//why i applied cyclic sort : arr containing n distinct numbers in the range [0, n]
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class FindAllNumbersDisapp{

	static void findDisappearedNumbers(int[] arr) {
        List<Integer> list = new ArrayList<Integer>();

        //cyclic sort
        int i=0;
        while(i<arr.length){
            int index = arr[i]-1;
            if(index<arr.length && arr[index]!=arr[i])
                swap(arr,index,i);
            else
                i++;
        }
        
        for(int j=0;j<arr.length;j++){
        	if(arr[j]!=j+1)
        		list.add(j+1);
        }
        System.out.println(list);
    }

    static void swap(int arr[],int a,int b){
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b]= temp;
	}
	public static void main(String args[]){
		int arr[] = {4,3,2,7,8,2,3,1};
		
		findDisappearedNumbers(arr);
	}
}
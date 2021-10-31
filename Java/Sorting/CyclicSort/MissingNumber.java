import java.util.*;
//why i applied cyclic sort : arr containing n distinct numbers in the range [0, n]
// https://leetcode.com/problems/missing-number/

class MissingNumber{

	static int findMissingNumber(int[] arr){
		//cyclic sort
		int i=0;
		 while(i<arr.length){
            int index = arr[i];
            if(index<arr.length && arr[index]!=arr[i])
                swap(arr,index,i);
            else
                i++;
        }
        System.out.println(Arrays.toString(arr));
		//searching missing element
		for(int j=0;j<arr.length;j++){
			if(arr[j]!=j)
				return j;

		}
		return arr.length;
	}

	static void swap(int arr[],int a,int b){
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b]= temp;
	}

	public static void main(String args[]){
		int arr[] = {9,6,4,2,3,5,7,0,1};
		//expected output 8;
		System.out.println(findMissingNumber(arr));
	}
}
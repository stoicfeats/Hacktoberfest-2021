import java.util.*;

class CyclicSort{

	/*
	Apply this when question says "when given number from range 1 to N"
	Here the elements in array is from 1 to N
	*/

	//O(N) complexity
	public static void cyclicSort(int[] arr){
		int i=0;
		while(i<arr.length){
			int index = arr[i]-1;
			if(arr[index]!=arr[i]){
				swap(arr,index,i);
			}else{
				i++;
			}
		}
		System.out.println(Arrays.toString(arr));
	}

	static void swap(int[] arr,int a,int b){
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	public static void main(String args[]){
		int arr[] = {5,4,3,2,1};
		cyclicSort(arr);
	}
}
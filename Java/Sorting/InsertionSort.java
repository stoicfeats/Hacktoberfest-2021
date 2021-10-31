import java.util.*;

class InsertionSort{
	//Time complexity : Bestcase - O(n)
	//					Worstcase - O(n^2)
	//suitable for partially sorted arrays 
	//stable
	public static void main(String args[]){
		int[] arr = {3,1,4,5,2,5,1,9,3,-1,0};
		insertionSort(arr);
	}

	static void insertionSort(int[] arr){
		for(int i=0;i<arr.length-1;i++){
			for(int j=i+1;j>0;j--){
				if(arr[j]<arr[j-1])
					swap(arr,j,j-1);
				else
					break;
			}
		}
		System.out.println(Arrays.toString(arr));
	}

	static void swap(int[] arr,int a,int b){
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
}
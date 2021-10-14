import java.util.*;

class BubbleSort{	
	//also called sinking sort or exchange sort

	public  static int[] bubbleSort(int arr[]){
		boolean  alreadySorted = true;
		int n = arr.length;
		for(int i=0;i<n;i++){
			for(int j=1;j<n-i;j++){
				if(arr[j-1]>arr[j]){
					//swap 
					alreadySorted = false;
					arr[j-1] = arr[j-1] + arr[j];
					arr[j] = arr[j-1] - arr[j];
					arr[j-1] = arr[j-1] - arr[j];
				}
			}

			if(alreadySorted)
				return arr;

		}
		return arr;
	}

	

	public static void main(String args[]){
		int[] sortThis = {-4,89,0,1,2,3,4,5};
		System.out.println(Arrays.toString(bubbleSort(sortThis)));

	}
}
class FindDuplicate{

	public static  int findDuplicate(int[] arr) {
        //cyclic sort
        int i=0;
        while(i<arr.length){
            if(arr[i] != i+1){
                int index = arr[i]-1;
                if(index<arr.length && arr[i] != arr[index]){
                    swap(arr,i,index);
                }else{
                    return arr[i];
                }    
            }else{
                i++;
            }
            
        }
        return -1;
    }
    
    public static void swap(int[] arr,int a,int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

	public static void main(String args[]){
		int arr[] = {1,3,4,2,2};
		//expected output 2;
		System.out.println(findDuplicate(arr));
	}

}
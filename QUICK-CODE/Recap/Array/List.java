class List{
	int[] array;
	int nextDataPos;
	List(int size){
		array=new int[size];
	}
	public void add(int data){
		array[nextDataPos++]=data;
	}
	public void printList(){
		System.out.print("[");
		for(int i=0;i<=(nextDataPos-1);i++ ){
			System.out.print(array[i]+",");
		}
		System.out.println("\b]");
	}
	public void add(int index,int data){
		for(int i=nextDataPos;i>=index;i--){
			array[i]=array[i-1];
		}
		array[index]=data;
		nextDataPos++;
	}
	public void remove(){
		nextDataPos--;
	}
	public void remove(int index){
		for(int i=index;i<=nextDataPos-1;i++){
			array[i]=array[i+1];
		}
			nextDataPos--;
	}
	public void addFirst(int data){
		for(int i=nextDataPos;i>=0;i--){
			array[i+1]=array[i];
		}
		array[0]=data;
		nextDataPos++;
	}
	public void addLast(int data){
		array[nextDataPos++]=data;
	}
	public void set(int index,int data){
		array[index]=data;
	}
	public void add(int[] ar){
		for(int i=0;i<ar.length;i++){
			array[nextDataPos++]=ar[i];
		}
	}
	public void add(int index,int[] ar){
		for(int j=ar.length-1;j>=0;j--){
			for(int i=nextDataPos;i>=index;i--){
				array[i]=array[i-1];
			}
			array[index]=ar[j];
			nextDataPos++;
		}
	}
	public void remove(int startIndex,int endIndex){
		for(int j=startIndex;j<=endIndex;j++){
			for(int i=startIndex;i<=nextDataPos-1;i++){
				array[i]=array[i+1];
			}
				nextDataPos--;
		}
	}
}
class Demo{
	public static void main(String args[]){
		List list=new List(50);
		list.add(10);
		list.add(20);
		list.add(30);
		list.add(40);
		list.add(50);
		list.printList(); //[10,20,30,40,50]
		
		list.add(2, 100); //public void add(int index, it data)
		list.printList(); //[10,20,100,30,40,50]
		
		list.remove();
		list.printList(); //[10,20,100,30,40]
		
		list.remove(2); //remove(int index)
		list.printList(); //[10,20,30,40]
		
		list.addFirst(100);
		list.printList();//[100,10,20,30,40]
		list.addLast(200);
		list.printList(); //[100,10,20,30,40,200]

		list.set(3,300); //public void set(int index, int data)
		list.printList(); //[100,10,20,300,40,200]
		
		list.add(new int[]{1,2,3,4});
		list.printList(); //[100,10,20,300,40,200,1,2,3,4]

		list.add(3,new int[]{5,6,7,8});
		list.printList(); //[100,10,20,5,6,7,8,300,40,200,1,2,3,4]		
		
		list.remove(0,6); //public void remove(int startIndex, int endIndex);
		list.printList(); //[300,40,200,1,2,3,4]*/
	}
}

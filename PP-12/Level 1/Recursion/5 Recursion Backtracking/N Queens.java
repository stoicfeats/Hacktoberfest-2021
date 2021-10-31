import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int chess[][] = new int[n][n];
      printNQueens(chess,"",0);
      
	}

	private static void printNQueens(int[][] chess, String string, int row) {
		// TODO Auto-generated method stub
		
		if(row==chess.length) {
			System.out.println(string+".");
			return;
		}
		
		for(int col=0;col<chess[0].length;col++) {
			if(isSafe(chess,row,col)) {
				chess[row][col]=1;
				printNQueens(chess, string+row+"-"+col+", ", row+1);
				chess[row][col]=0;
			}
		}
		
	}

	private static boolean isSafe(int[][] chess, int row, int col) {
	    
		int r = row-1;
		int c = col;
		while(r>=0) {
			if(chess[r][c]==1) {
				return false;
			}
			r--;
		}
		
		r=row-1;
		c=col-1;
		while(r>=0&&c>=0) {
			if(chess[r][c]==1) {
				return false;
			}
			r--;
			c--;
		}
		r=row-1;
		c=col+1;
		while(r>=0&&c<chess.length) {
			if(chess[r][c]==1) {
				return false;
			}
			r--;
			c++;
		}
		
		return true;
	}

}
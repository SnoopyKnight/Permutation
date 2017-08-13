package permutation;
import java.util.Scanner;
import java.lang.*;



public class permutation {
	public static int count=0;
	
	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		String input = keyboard.next();
		double start, end;
		
		start = System.currentTimeMillis();
		perm(input);
		end = System.currentTimeMillis();
		System.out.println("Total Execution Time¡G" + (end-start) + "ms");
		System.out.println("num of permutation:" + count);

	}
	
	public static void perm(String input){ 
		perm("", input); 
	}

	private static void perm(String prefix, String str) { 
		int n = str.length();
		if (n == 0){
			System.out.println(prefix);
			count++;
		}
		else {
	        for (int i = 0; i < n; i++)
	            perm(prefix + str.charAt(i), str.substring(0, i) + str.substring(i+1, n));
	    }
	} 
		
}

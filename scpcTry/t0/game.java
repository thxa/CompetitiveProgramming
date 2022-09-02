import java.util.Scanner;
public class 
Main {

	public static void main(String[] args) {
		Scanner kb = new Scanner(System.in);
		int t = kb.nextInt(), mike=0, jack=0, n,x;
		while(t-- > 0) {
			n = kb.nextInt();
			for (int i = 0; i < n; i++) {
				x = kb.nextInt();
				if (x % 2 == 0) jack = x;
				else 			mike = x;
			}
			System.out.println((mike > jack)? "Mike": "Jack");
		}
	}
}




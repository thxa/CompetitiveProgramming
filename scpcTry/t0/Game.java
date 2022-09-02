import java.util.Scanner;
public class 
Game 
{
	public static void main(String[] args) {
		Scanner kb = new Scanner(System.in);
		int t = kb.nextInt(), n, x, max, counter;
        while(t-- > 0) {
			n = kb.nextInt();
            max=0;
            counter=0;
			while(n-- > 0) {
				x = kb.nextInt();
				if (x > max) {
                    max = x;
                    counter++;
                }
			}
			System.out.println((counter % 2 == 0)? "Jack": "Mike");
		}
	}
}




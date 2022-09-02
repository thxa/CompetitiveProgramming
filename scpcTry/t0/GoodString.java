import java.util.HashMap;
import java.util.Scanner;
public class 
GoodString
{
    public static void 
    main(String[] args) {
		Scanner kb = new Scanner(System.in);
		String s = kb.next();
		char c;
		int k = kb.nextInt();
		HashMap<Character, Integer> ht = new HashMap<Character, Integer>();
		for (int i = 0; i < s.length(); i++) {
			c = s.charAt(i);
			if (ht.containsKey(c)) ht.put(c,ht.get(c)+1);
			else				   ht.put(c, 1);
		}
		System.out.printf("%s ",(ht.containsValue(k)) ? "Yes" : "No");
		for (Character x : ht.keySet()) {
			if (ht.get(x) == k) {
				System.out.println(x);
				break;
			}
		}	
	}
}


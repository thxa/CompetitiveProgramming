import java.util.Scanner;
public class 
Gifts {
    public static int
    sum(int n, Scanner kb ) {
        int result = 0;
        while(n-- > 0)
            result += kb.nextInt();
        return result;
    }
	public static void 
    main(String[] args) 
    {
        Scanner kb = new Scanner(System.in);
        int n = kb.nextInt(), jack = sum(n, kb), greg=sum(n, kb);
        System.out.println((jack == greg)? "fair":"not fair");
    }
}


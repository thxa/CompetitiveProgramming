import java.util.Scanner;
public class 
MinimumX {
	public static void 
    main(String[] args) {
        Scanner kb = new Scanner(System.in);
        int t = kb.nextInt(), a=0;
        while(t-->0) {
            a = kb.nextInt();
            while(a-- > 0) {
                String s = Integer.toBinaryString(a);
                System.out.println(s.valueOf("0"));
            }
        }
	}
}
/*
t = int(input())
while(t):
    a = int(input())
    for x in range(a,0,-1):
        result = bin(x)[2:]
        if (result.count("0") == 0):
            print(x)
            break
    t-=1
*/

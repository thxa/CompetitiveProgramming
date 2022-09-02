import java.util.Scanner;
public class 
StockMarket {
	public static void 
    main(String[] args) {
        Scanner kb = new Scanner(System.in);
        int t = kb.nextInt(), price1, price2;
        while(t-->0) {
            price1 = kb.nextInt();
            price2 = kb.nextInt();
            System.out.println(price2-price1);
        }
	}
}


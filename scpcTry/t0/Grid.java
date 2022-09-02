import java.util.Scanner;
public class 
Grid {
	public static void 
    main(String[] args) 
    {
        Scanner kb = new Scanner(System.in);
        int N = kb.nextInt(), M = kb.nextInt();
        int grid[][] = new int[N][M];
        for(int r=0; r < N; r++)
            for(int c=0; c < M; c++)
                grid[r][c] = kb.nextInt();
        for(int r=0; r < N; r++) {
            for(int c=0; c < M; c++)
               System.out.printf("%d ", grid[r][c]);
        System.out.println();
        }

   }
}


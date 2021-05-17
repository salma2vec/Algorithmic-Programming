import java.util.*;
public class Main {
  public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        if (A == B && A == C)
        {
            System.out.println("YES");
        }
        else if ((A == B) || (A == C) || (C == B))
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
    }
}

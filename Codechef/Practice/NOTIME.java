/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int x = sc.nextInt();
		int y = sc.nextInt();
		int arr[] = new int[N];
		for(int i=0; i<N;i++)
		arr[i] = sc.nextInt();
		for(int i=0; i<N;i++)
		arr[i] = y + arr[i];
		for(int i=0; i<N; i++){
		      if(arr[i]==x){
		            System.out.println("YES");
		            return;
		      }
		}
		System.out.println("NO");
		
	}
}

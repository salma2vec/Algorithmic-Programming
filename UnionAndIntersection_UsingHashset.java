import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
 
public class Main {
    static int m,n;
    static void display(int[] arr1,int[] arr2){
        Set<Integer> obj = new HashSet<>();
        int i,j;
        for(i=0; i<arr1.length; i++){
            obj.add(arr1[i]);
        }
        for(j=0; j<arr2.length; j++){
            obj.add(arr2[j]);
        }
        System.out.println("The union of the given arrays is as follows: ");
        for(Integer I: obj){
            System.out.print(I + " ");
        }
        System.out.println();
        obj.clear();
        System.out.println("The intersection of the given arrays is as follows: ");
        for(i=0; i<arr1.length; i++){
            obj.add(arr1[i]);
        }
        for(j=0; j<arr2.length; j++){
            if(obj.contains(arr2[j]))
                System.out.print(arr2[j] + " ");
        }
    }
    
    public static void main(String[] args) throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the size of the arrays: ");

        try {
            n = Integer.parseInt(br.readLine());
            m = Integer.parseInt(br.readLine());
        }
        catch (IOException e)
        {
            System.out.println("Beep. Beep. Invalid input.");
        }
        int[] arr1 = new int[n];
        int[] arr2 = new int[m];
        System.out.println("Enter the first array elements: ");
        int i,j;
        for(i=0; i<arr1.length; i++){
            try {
                arr1[i] = Integer.parseInt(br.readLine());
            }
            catch (IOException e)
            {
                System.out.println("Beep. Beep. Invalid input. Try again.");
                i--;
            }
        }
        System.out.println("Enter the second array elements: ");
        for(i=0; i<arr2.length; i++){
            try {
                arr2[i] = Integer.parseInt(br.readLine());
            }
            catch (IOException e)
            {
                System.out.println("Beep. Beep. Invalid input. Try again.");
                i--;
            }
        }
        display(arr1,arr2);
    }
}

/* 
Time Complexity: 
O(n + m) 
where n => size of arr1,
m => size of arr2.

Output:

Enter the size of the arrays:                                                                         
5                                                                                                     
3                                                                                                     
Enter the first array elements:                                                                       
1                                                                                                     
2                                                                                                     
3                                                                                                     
4                                                                                                     
5                                                                                                     
Enter the second array elements:                                                                      
5                                                                                                     
6                                                                                                     
7                                                                                                     
The union of the given arrays is as follows:                                                          
1 2 3 4 5 6 7                                                                                         
The intersection of the given arrays is as follows:                                                   
5  

*/

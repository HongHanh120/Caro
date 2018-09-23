/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fibonnaci;

/**
 *
 * @author Admin
 */
import java.util.Scanner;
public class Fibonnaci {
    public static int fibonnaci(int n){
        int[] arr = new int[n + 1];
        arr[0] = 0;
        arr[1] = 1;
        if(n > 1){
            for(int i = 2; i <= n; i++)
                arr[i] = arr[i - 1] + arr[i - 2];
        }
        return arr[n];
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(fibonnaci(n));
    }
    
}

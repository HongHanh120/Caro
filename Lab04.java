/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab04;



/**
 *
 * @author Admin
 */
import java.util.Scanner;
public class Lab04 {
    public static int max(int a, int b){
        int Max = a;
        if(a < b)
            Max = b;
        return Max;
    }
    
    public static int arrayMax(int[] arr){
        int Max = arr[0];
        for(int i = 0; i < arr.length; i++){
            if(arr[i] > Max)
                Max = arr[i];
        }
        return Max;
    }
    
    public static void IBM(float kg, float m){
        float IBM = kg/(m*m);
        if(IBM < 18.5)
            System.out.println("Thiếu cân");
        if(IBM >= 18.5 && IBM < 23)
            System.out.println("Bình thường");
        if(IBM >= 23 && IBM <= 24.99)
            System.out.println("Thừa cân");
        if(IBM >= 25)
            System.out.println("Béo phì");
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
//        int a = sc.nextInt();
//        int b = sc.nextInt();
//        System.out.println(max(a, b));
        
//        int[] arr = new int[100];
//        int n = sc.nextInt();
//        for(int i = 0; i < n; i++){
//            arr[i] = sc.nextInt();
//        }
//        n = arr.length;
//        System.out.println(arrayMax(arr));

        float kg = sc.nextFloat();
        float m = sc.nextFloat();
        IBM(kg, m);
    }
    
}

package javabasics;
 
import java.util.Scanner;
 
/**
 *
 * @author Admin
 */
public class BalancePoint {
    public static Scanner jin = new Scanner(System.in);
    
    public static long[] x = new long[100005];
    
    public static void main(String[] args) {
        int t = jin.nextInt();
        while(t-- > 0){
            int n = jin.nextInt();
            long sum = 0;
            for(int i = 0; i<n; i++){
                x[i] = jin.nextInt();
                sum += x[i];
            }
            long left = 0;
            boolean ok = false;
            for(int i = 0; i<n; i++){
                if(left == sum - left - x[i]){
                    System.out.println(i + 1);
                    ok = true;
                    break;
                }
                left += x[i];
            }
            if(!ok) System.out.println(-1);
        }
    }
}
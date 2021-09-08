/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codeptit;

import java.util.Scanner;

/**
 *
 * @author phuon
 */
public class J02004 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            long[] a = new long[n];
            for(int i = 0; i < n; i++)
            {
                long c = sc.nextLong();
                a[i] = c;
            }
            boolean kt = true;
            for(int i = 0; i < n / 2; i++)
            {
                    if(a[i] !=  a[n - i - 1])
                    {
                        kt = false;
                        break;
                    }
            }
            if(!kt) System.out.println("NO");
            else System.out.println("YES");
        }
    }
}

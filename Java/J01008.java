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
public class J01008 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long[] a = new long[100005];
        a[0] = 0;
        a[1] = 0;
        for(int i = 2; i < 100005; i++) a[i] = 1;
        for(int i = 2; i < 100005; i++)
        {
            for(int j = 2 * i; j < 100005; j += i)
            {
                if(a[j] == 0) continue;
                a[j] = 0;
            }
        }
        int t = sc.nextInt();
        int k = 1;
        while(t-- > 0)
        {
            long n = sc.nextLong();
            System.out.print("Test " + k + ": ");
            k++;
            for(int i = 2; i < 100005; i++)
            {
                if(a[i] == 1 && n % i == 0)
                {
                    int dem = 0;
                    System.out.print(i + "(");
                    while(n % i == 0)
                    {
                        dem++;
                        n /= i;
                    }
                    System.out.print(dem + ") ");
                }
                if(n < a[i])
                {
                    break;
                } 
            }
            if(n != 1) System.out.println(n + "(1)");
            System.out.print("\n");
        }
    }
}

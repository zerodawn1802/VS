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
public class J02007 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int k = 1;
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int[] a = new int[100005];
            int[] b = new int[n];
            for(int i = 0; i < 100005; i++) a[i] = 0;
            for(int i = 0; i < n; i++)
            {
                int c = sc.nextInt();
                b[i] = c;
                a[c]++;
            }
            System.out.println("Test " + k + ":");
            k++;
            for(int i = 0; i < n; i++)
            {
                if(a[b[i]] != 0)
                {
                    System.out.print(b[i] + " xuat hien " + a[b[i]] + " lan\n");
                    a[b[i]] = 0;
                }
            }
        }
    }
}

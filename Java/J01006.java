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
public class J01006 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        long[] a = new long[95];
        a[1] = 1;
        a[2] = 1;
        for(int i = 3; i < 93; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        while(t-- > 0)
        {
            int n = in.nextInt();
            System.out.println(a[n]);
        }
    }
}

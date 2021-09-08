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
public class J01011 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long m = a, n = b;
            while(a != b)
            {
                if(a > b) a-=b;
                else b -=a;
            }
            System.out.println(m * n / a + " " + a);
        }
    }
}

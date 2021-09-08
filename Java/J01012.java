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
public class J01012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            if(n % 2 != 0) System.out.println(0);
            else
            {
                int res = 0;
                for(int i = 1; i <= Math.sqrt(n); i++)
                {
                    if(n % i == 0)
                    {
                        if(i % 2 == 0) res++;
                        int m = n / i;
                        if(m % 2 == 0 && m != i) res++;
                    }
                }
                System.out.println(res);
            }
        }
                
    }
}

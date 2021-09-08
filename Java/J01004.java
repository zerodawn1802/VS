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
public class J01004 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0)
        {
            int n = in.nextInt();
            int k = 0;
            for(int i = 2; i <= Math.sqrt(n); i++)
            {
                if(n % i == 0)
                {
                    k = 1;
                    break;
                }
            }
            if(k == 1) System.out.println("NO");
            else System.out.println("YES");
        }
    }
    
}

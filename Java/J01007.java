/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Windows 10 Version 2
 */
import java.util.*;
public class J01007 {
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        long[] a= new long[95];
        a[0] = 0;
        a[1]=1;
        for(int i=2;i<93;i++){
            a[i]=a[i-1]+a[i-2];
        }
        int t=in.nextInt();
        while(t-- >0){
            long n = in.nextLong();
            int l = 0;
            for(int i=0;i<93;i++)
            {
                if(a[i]==n) 
                {
                    System.out.println("YES");
                 break;
                }
                else if(n < a[i])
                {
                    l = 1;
                    break;
                }
            }
            if(l == 1) System.out.println("NO");
        }
    }
}
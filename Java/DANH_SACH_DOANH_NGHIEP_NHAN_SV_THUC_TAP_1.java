package codePtit;

import java.util.*;

public class Test {
    static class sv{
        private String ma;
        private String name;
        private long soluong;
        public sv(){}

        public void nhap(Scanner s) {
            ma = s.next();
            s.nextLine();
            name = s.nextLine();
            soluong = s.nextLong();
        }
        public String getMa(){return ma;}
        public String getName(){return name;}
        public long getSoluong(){return soluong;}
        public void xuat(){
            System.out.println(this.getMa()+" "+this.getName()+" "+this.getSoluong());
        }
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        s.nextLine();
        List<sv> res = new ArrayList<>();
        while(n-->0){
            sv i = new sv();
            i.nhap(s);
            res.add(i);
        }
        Collections.sort(res,Comparator.comparing(sv::getMa));
        Collections.sort(res, Comparator.comparing(sv::getSoluong,Comparator.reverseOrder()));
        for(sv i :res){
            i.xuat();
        }
    }
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package phanso;

/**
 *
 * @author Admin
 */
public class PhanSo {
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        KhoiTaoPhanSo p1 = new KhoiTaoPhanSo(-20, 50);
        p1.rutGon();
        System.out.println(p1.getTu() + "/" + p1.getMau());
        KhoiTaoPhanSo p2 = new KhoiTaoPhanSo(30, 60);
        p2.rutGon();
        System.out.println(p2.getTu() + "/" + p2.getMau());
        
        p1.congPhanSo(p2);
        p1.truPhanSo(p2);
        p1.nhanPhanSo(p2);
        p1.chiaPhanSo(p2);
        boolean compare = p1.equals(p2);
        if(compare != true)
            System.out.println("Hai phan so khong bang nhau!");
        else
            System.out.println("Hai phan so bang nhau!");
    }
    
}

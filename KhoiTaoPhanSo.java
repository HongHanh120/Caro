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
public class KhoiTaoPhanSo {
    private int tu;
    private int mau;
    
    public int getTu(){
        return tu;
    }
    public void setTu(int tu){
        this.tu = tu;
        
    }
    public int getMau(){
        return mau;
    }
    public void setMau(int mau){
        this.mau = mau;
        
    }
    
    public KhoiTaoPhanSo(int tu, int mau){
        this.tu = tu;
        this.mau = mau;
    }
    
    public static int GCD(int a, int b){
        if(a < 0)
            a = -a;
        if(b < 0)
            b = -b;
        while(a != b){
            if(a > b)
                a -=b;
            else
                b -=a;
        }
        return a;
    }
    
    public void rutGon(){
        int gcd = GCD(this.getTu(), this.getMau());
        this.setTu(this.getTu() / gcd);
        this.setMau(this.getMau() / gcd);
    }
    
    public void congPhanSo(KhoiTaoPhanSo ps){
        int tongTu = this.getTu() * ps.getMau() + this.getMau() * ps.getTu();
        int tongMau = this.getMau() * ps.getMau();
        KhoiTaoPhanSo phansotong = new KhoiTaoPhanSo(tongTu, tongMau);
        System.out.println("Tong hai phan so = " + phansotong.getTu() + "/" + phansotong.getMau());
    }
    
    public void truPhanSo(KhoiTaoPhanSo ps){
        int hieuTu = this.getTu() * ps.getMau() - this.getMau() * ps.getTu();
        int hieuMau = this.getMau() * ps.getMau();
        KhoiTaoPhanSo phansohieu = new KhoiTaoPhanSo(hieuTu, hieuMau);
        System.out.println("Hieu hai phan so = " + phansohieu.getTu() + "/" + phansohieu.getMau());
    }
    
    public void nhanPhanSo(KhoiTaoPhanSo ps){
        int tichTu = this.getTu() * ps.getTu();
        int tichMau = this.getMau() * ps.getMau();
        KhoiTaoPhanSo tichphanso = new KhoiTaoPhanSo(tichTu, tichMau);
        tichphanso.rutGon();
        System.out.println("Tich hai phan so = " + tichphanso.getTu() + "/" + tichphanso.getMau());
    }
    
    public void chiaPhanSo(KhoiTaoPhanSo ps){
        int thuongTu = this.getTu() * ps.getMau();
        int thuongMau = this.getMau() * ps.getTu();
        KhoiTaoPhanSo thuongphanso = new KhoiTaoPhanSo(thuongTu, thuongMau);
        thuongphanso.rutGon();
        System.out.println("Thuong hai phan so = " + thuongphanso.getTu() + "/" + thuongphanso.getMau());
    }
    
    public boolean equals(KhoiTaoPhanSo ps){
        if(this.getTu()!= ps.getTu())
            return false;
        if(this.getMau() != ps.getMau())
            return false;
        return true;
    }
}

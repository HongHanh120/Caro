/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mainlab03;

/**
 *
 * @author Admin
 */
public class Class {
    String name;
    String subjectCode;
    String credit;
    
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }
    
    public String getSubjectCode(){
        return subjectCode;
    }
    public void setSubjectCode(String subjectCode){
        this.subjectCode = subjectCode;
    }
    
    public String getCredit(){
        return credit;
    }
    public void setCredit(String credit){
        this.credit = credit;
    }
    
    public Class(String name, String subjectCode, String credit){
        this.name = name;
        this.subjectCode = subjectCode;
        this.credit = credit;
    }
    
    public String getInfor(){
        return "Name: " + name + "\nSubjectCode: " + subjectCode + "\nCredit: " + credit;
    }
            
}

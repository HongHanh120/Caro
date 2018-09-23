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
public class Mainlab03 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Dog dog = new Dog();
        dog.setSize(20);
        dog.setBreed("Husky");
        dog.setName("Bim");
        dog.Infor();
        
        System.out.println("");
        
        Rectangle rectangle = new Rectangle();
        rectangle.setLength(20);
        rectangle.setWidth(30);
        rectangle.getCalculateArea();
        
        System.out.println("");
        
        People people = new People();
        people.setName("Hanh");
        people.setAge(19);
        people.setEmail("lehonghanh.120@mail.com");
        people.setJob("Student");
        people.Infor();
        
        System.out.println("");
        
        Car car = new Car();
        car.setBrand("Toyota");
        car.setColor("blue");
        car.setMaxSpeed(150);
        car.setFuel("Deisel");
        car.Infor();
        
        System.out.println("");
        
        Class myclass = new Class("OPP", "INT2204", "3");
        System.out.println(myclass.getInfor());
    }
    
}

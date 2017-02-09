import java.lang.Math;
public class Shape3{
    public static void main(String []args){
        Shape c = new Circle(10);
        Shape r = new Rectangle(10, 5);
        Shape r2 = new Rectangle(20, 3);
        Shape t = new Triangle(10, 5);
        c.printArea();
        r.printArea();
        r2.printArea();
        t.printArea();
    }
}

interface Shape{
    public double area ();
    public void printArea();
}

abstract class BaseShape implements Shape{
    public void printArea(){
        System.out.println(area());
    }
}

class Circle extends BaseShape implements Shape{
    double radius;
    public Circle(double r){
        radius=r;
    }
    public double area(){
        return radius*radius*Math.PI;
    }
}

class Rectangle extends BaseShape implements Shape{
    double width, height;
    public Rectangle (double w, double h){
        width=w;
        height=h;
    }
    public double area(){
        return width*height;
    }
    public void printArea() {
        System.out.println("rect width = " + + width);
        System.out.println("rect height = " + + height);
        System.out.println("rect area = " + + area());
        
    }
}

class Triangle extends BaseShape implements Shape{
    double base, height;
    public Triangle (double b, double h){
        base=b;
        height=h;
    }
    public double area(){
        return base*height*0.5;
    }
}
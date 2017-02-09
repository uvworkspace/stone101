import java.lang.Math;
public class shape2{
    public static void main(String []args){
        Shape c = new Circle(10);
        Shape r = new Rectangle(10, 5);
        Shape t = new Triangle(10, 5);
        c.printArea();
        r.printArea();
        t.printArea();
    }
}

interface Shape{
    public double area ();
    public void printArea();
}

class Circle implements Shape{
    double radius;
    public Circle(double r){
        radius=r;
    }
    public double area(){
        return radius*radius*Math.PI;
    }
    public void printArea(){
        System.out.println(area());
    }
}

class Rectangle implements Shape{
    double width, height;
    public Rectangle (double w, double h){
        width=w;
        height=h;
    }
    public double area(){
        return width*height;
    }
    public void printArea(){
        System.out.println(area());
    }
}

class Triangle implements Shape{
    double base, height;
    public Triangle (double b, double h){
        base=b;
        height=h;
    }
    public double area(){
        return base*height*0.5;
    }
    public void printArea(){
        System.out.println(area());
    }
}
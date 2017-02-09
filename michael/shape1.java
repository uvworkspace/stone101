import java.lang.Math;
public class shape1{
    public static void main(String [] args){
    Circle c = new Circle(10);
    Rectangle r = new Rectangle(10, 5);
    Triangle t = new Triangle(10, 5);
    c.printArea();
    r.printArea();
    t.printArea();
    }
}

class Circle{
    double radius;
    double area;
    public Circle(double r){
        radius=r;
    }
    public void area(){
        area=Math.pow(radius,2)*Math.PI;
    }
    public void printArea(){
        area();
        System.out.println(area);
    }
}

class Rectangle{
    double width, height, area;
    public Rectangle(double w, double h){
        width=w;
        height=h;
    }
    public void area(){
        area=width*height;
    }
    public void printArea(){
        area();
        System.out.println(area);
    }
}

class Triangle{
    double base, height, area;
    public Triangle(double b, double h){
        base=b;
        height=h;
    }
    public void area(){
        area=(double)(base*height)*0.5;
    }
    public void printArea(){
        area();
        System.out.println(area);
    }
}
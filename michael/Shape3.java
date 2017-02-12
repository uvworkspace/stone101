import java.lang.Math;
import java.util.ArrayList;
public class Shape3{
    public static void main(String []args){
        Canvas c=new Canvas();
        c.addShape(new Circle(10));
        c.addShape(new Rectangle(10, 5));
        c.addShape(new Rectangle(20, 3));
        c.addShape(new Triangle(10, 5));
        c.areaSum();
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

class Canvas{
    private ArrayList<Shape> shapes= new ArrayList<Shape>();
    double area=0;
    public Canvas() {
        System.out.println("Canvas created.");
    }
    public void addShape(Shape shape){
        shapes.add(shape);
    }
    public void areaSum(){
        for (int i=0;i<shapes.size();i++){
            area+=shapes.get(i).area();
        }
        System.out.println(area);
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
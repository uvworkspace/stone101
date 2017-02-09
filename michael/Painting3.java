import java.util.ArrayList;
public class Painting3{
    public static void main(String[] args){
        Canvas c=new Canvas(21,18,'.');
        c.addShape(new Circle(10,9,71,'#'));
        c.addShape(new Rectangle(12,3,7,4,'o'));
        c.addShape(new Rectangle(1,15,2,3,'x'));
        c.drawAll();
        c.dump();
    }
}

interface Shape{
    public void draw(char arr[][]);
}

class Canvas{
    public static int truewidth, trueheight;
    public static char[][] rboard;
    private ArrayList<Shape> shapes=new ArrayList<Shape>();
    char ch;
    public Canvas(int w, int h, char c){
        truewidth=w;
        trueheight=h;
        char[][] board=new char[trueheight][truewidth];
        rboard=board;
        ch=c;
    }
    public void addShape(Shape shape){
        shapes.add(shape);
    }
    public void fill(){
        for (int row=0;row<=trueheight-1;row++){
            for (int col=0;col<=truewidth-1;col++){
                rboard[row][col]=ch;
            }
        }
    }
    public void dump(){
        for (int row=0;row<=trueheight-1;row++){
            for (int col=0;col<=truewidth-1;col++){
                if(col!=truewidth-1) System.out.print(rboard[row][col]);
                else System.out.println(rboard[row][col]);
            }
        }
    }
    public void drawAll(){
        this.fill();
        for (int i=0;i<shapes.size();i++){
            shapes.get(i).draw(rboard);
        }
    }
}

class Circle implements Shape{
    int rx, ry, radius;
    char c;
    public Circle(int x, int y, int r, char ch){
        rx=x; ry=y; radius=r; c=ch;
    }
    public void draw(char arr[][]){
        for(int row=0;row<arr.length;row++){
            for (int col=0;col<arr[0].length;col++){
                if ((row-ry)*(row-ry)+(col-rx)*(col-rx)<=radius){
                    arr[row][col]=c;
                }
            }
        }
    }
}

class Rectangle implements Shape{
    int rx, ry, width, height;
    char c;
    public Rectangle(int x, int y, int w, int h, char ch){
        rx=x; ry=y; width=w; height=h; c=ch;
    }
    
    public void draw(char arr[][]){
        for (int row=ry;row<height+ry;row++){
            for (int col=rx;col<width+rx;col++){
                arr[row][col]=c;
            }
        }
    }
}
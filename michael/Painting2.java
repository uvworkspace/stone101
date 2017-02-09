public class Painting2{
    public static void main(String[] args){
        Canvas c=new Canvas(18,10,'.');
        Rectangle rec=new Rectangle(4,2,7,6,'X');
        Rectangle rec2=new Rectangle(8,5,6,4,'o');
        Circle circ=new Circle(7,5,5,'#');
        c.fill();
        rec.draw(Canvas.rboard);
        rec2.draw(Canvas.rboard);
        circ.draw(Canvas.rboard);
        c.dump();
    }
}

class Circle{
    int rx, ry, radius;
    char c;
    public Circle(int x, int y, int r, char ch){
        rx=x; ry=y; radius=r; c=ch;
    }
    public void draw(char arr[][]){
        for(int row=0;row<=Canvas.trueheight;row++){
            for (int col=0;col<=Canvas.truewidth;col++){
                if ((row-ry)*(row-ry)+(col-rx)*(col-rx)<=radius){
                    arr[row][col]=c;
                }
            }
        }
    }
}

class Rectangle{
    int rx, ry, width, height;
    char c;
    public Rectangle(int x, int y, int w, int h, char ch){
        rx=x; ry=y; width=w; height=h; c=ch;
    }
    
    public void draw(char arr[][]){
        for (int row=ry-1;row<height+ry-1;row++){
            for (int col=rx-1;col<width+rx-1;col++){
                arr[row][col]=c;
            }
        }
    }
}

class Canvas{
    public static int truewidth, trueheight;
    public static char[][] rboard;
    char ch;
    public Canvas(int w, int h, char c){
        truewidth=w;
        trueheight=h;
        char[][] board=new char[trueheight][truewidth];
        rboard=board;
        ch=c;
    }
    public void fill(){
        for (int row=0;row<trueheight;row++){
            for (int col=0;col<truewidth;col++){
                rboard[row][col]=ch;
            }
        }
    }
    public void dump(){
        for (int row=0;row<trueheight;row++){
            for (int col=0;col<truewidth;col++){
                if(col!=truewidth-1) System.out.print(rboard[row][col]);
                else System.out.println(rboard[row][col]);
            }
        }
    }
}
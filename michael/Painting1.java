public class Painting1{
    public static void main(String[] args){
        Canvas painting=new Canvas(5,5,'m');
        painting.fill();
        painting.dump();
    }
}

class Canvas{
    int width, height;
    char[][] rboard;
    char ch;
    public Canvas(int w, int h, char c){
        width=w;
        height=h;
        char[][] board=new char[height][width];
        rboard=board;
        ch=c;
        
    }
    public void fill(){
        for (int row=0;row<=height-1;row++){
            for (int col=0;col<=width-1;col++){
                rboard[row][col]=ch;
            }
        }
    }
    public void dump(){
        for (int row=0;row<=height-1;row++){
            for (int col=0;col<=width-1;col++){
                if(col!=width-1) System.out.print(rboard[row][col]);
                else System.out.println(rboard[row][col]);
            }
        }
    }
}
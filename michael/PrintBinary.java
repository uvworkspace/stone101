import java.lang.Math;
public class PrintBinary{
    static int power=0;
    public static void main(String[] args){
        System.out.println(bin(200));
    }
    public static int bin(int n){
        int binary=0;
        int temp=n;
        int t2=temp;
        if (n==1||n==0) return n;
        if (n%2!=0){
            temp-=1;
            n-=1;
            binary++;
        }
        while(true){
            while(check(temp)==false)temp-=2;
            check(temp);
            if (temp==2){
                binary+=10;
                break;
            }
            binary+=Math.pow(10,power);
            if (temp>n-temp){
                temp=n-temp;
                t2=temp;
                n=t2;
            }
            else break;
            if (temp==0) break;
            
        }
        return binary;
    }
    public static boolean check(int x){
        power=0;
        while(x!=1){
            if (x%2==0){
                x/=2;
                power+=1;
            }
            else return false;
        }
        return true;
    }
}
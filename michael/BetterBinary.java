import java.lang.Math;
import java.util.ArrayList;
import java.util.Scanner;
public class BetterBinary{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        string(num);
    }
    public static void arr(int n ){
        ArrayList<Integer> bin=new ArrayList<Integer>();
        int cnt=0;
        while(n>0){
            bin.add(n%2);
            n/=2;
            cnt++;
        }
        for (int i=cnt-1;i>=0;i--){
            System.out.print(bin.get(i));
        }
    }
    public static void string(int n){
        String bin1="";
        int temp=0;
        while(n>0){
            bin1=n%2+bin1;
            System.out.println(bin1);
            n/=2;
        }
        System.out.println(bin1);
    }
    
     /*public static void binary(int n){
        int[] bin= new int[20];
        int count=0;
        while(n>0){
            bin+=n%2*Math.pow(10,count);
            n/=2;
            count++;
        }
        System.out.println(bin);*/
}
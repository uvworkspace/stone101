import java.util.Scanner;
public class PrintHex{
    static String[] mapping={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
    public static void main(String[] args){
        int[] input=new int[11];
        Scanner sc=new Scanner(System.in);
        for (int i=0;i<=input.length-1;i++){
            input[i]=sc.nextInt();
        }
        for (int j=0;j<=input.length-1;j++){
            System.out.print(input[j]+" => ");
            hex(input[j]);
            System.out.println("");
        }
    }
    public static void hex(int n){
        int dig;
        dig=n%16;
        n/=16;
        if (n>0){
            hex(n);
        }
        System.out.print(mapping[dig]);
    }
}
public class BinaryRecursion{
    public static void main(String[] args){
        hex(10);
    }
    public static void hex(int n){
        int dig;
        dig=n%2;
        n/=2;
        if (n>0){
            hex(n);
        }
        System.out.print(dig);
    }
}
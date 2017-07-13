class BaseConverter {
  public static int binToInt(String bin) {
    int sum = 0;
    for (int i=0; i<bin.length(); i++) {
      int num = bin.charAt(i) - '0';
      sum = sum*2 + num;
    }
    return sum;
  }
}

public class BinToInt {
  public static void main(String[] args) {
    int num = BaseConverter.binToInt("101010111100");
    System.out.println(num);
    num = BaseConverter.binToInt("1110111100");
    System.out.println(num);
  }
}
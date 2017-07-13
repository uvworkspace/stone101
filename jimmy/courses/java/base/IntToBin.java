class BaseConverter {
  public static String intToBin(int x) {
    String binStr = "";
    while (x > 0) {
      binStr = x % 2 + binStr;
      x /= 2;
    }
    return binStr;
  }
}

public class IntToBin {
  public static void main(String[] args) {
    String bin = BaseConverter.intToBin(2748);
    System.out.println(bin);
    bin = BaseConverter.intToBin(1024);
    System.out.println(bin);
  }
}
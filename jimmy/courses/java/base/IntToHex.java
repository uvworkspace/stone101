class BaseConverter {
  public static final String HEX = "0123456789ABCDEF";

  public static String intToHex(int x) {
    String hexStr = "";
    while (x > 0) {
      hexStr = HEX.charAt(x % 16) + hexStr;
      x /= 16;
    }
    return hexStr;
  }
}

public class IntToHex {
  public static void main(String[] args) {
    String hex = BaseConverter.intToHex(2748);
    System.out.println(hex);
    hex = BaseConverter.intToHex(1024);
    System.out.println(hex);
  }
}
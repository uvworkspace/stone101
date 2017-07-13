class BaseConverter {
  public static final String HEX = "0123456789ABCDEF";
  
  public static String binToHex(String bin) {
    String hex = "";
    for (int i=bin.length()-1; i>=0; i-=4) {
      int sum = 0;
      for (int j=3; j>=0; j--) {
        int idx = i-j;
        if (idx < 0) continue;
        char c = bin.charAt(idx);
        sum = sum*2 + (c - '0');
      }
      hex = HEX.charAt(sum) + hex;
    }
    return hex;
  }
}

public class BinToHex {
  public static void main(String[] args) {
    String hex = BaseConverter.binToHex("101010111100");
    System.out.println(hex);
    hex = BaseConverter.binToHex("1110111100");
    System.out.println(hex);
  }
}
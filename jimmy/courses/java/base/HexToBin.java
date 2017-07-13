class BaseConverter {
  public static int charToInt(char c) {
    if (c >= '0' && c <= '9') {
      return c - '0';
    } else if (c >= 'a' && c <= 'z') {
      return c - 'A' + 10;
    } else if (c >= 'A' && c <= 'Z') {
      return c - 'A' + 10;
    }  
    return 0;
  }
  
  public static String hexDigitToBin(char c, boolean firstDigit) {
    int num = charToInt(c);
    String binStr = "";
    for (int i=0; i<4; i++) {
      binStr = num % 2 + binStr;
      num /= 2;  
      if (firstDigit && num == 0) break;
    }
    return binStr;
  }
  
  public static String hexToBin(String hex) {
    String binStr = "";
    for (int i=0; i<hex.length(); i++) {
      binStr += hexDigitToBin(hex.charAt(i), i==0);
    }
    return binStr;
  }
}

public class HexToBin {
  public static void main(String[] args) {
    String bin = BaseConverter.hexToBin("ABC");
    System.out.println(bin);
    bin = BaseConverter.hexToBin("3BC");
    System.out.println(bin);
  }
}
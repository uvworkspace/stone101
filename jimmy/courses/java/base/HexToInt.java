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
  
  public static int hexToInt(String hex) {
    // to be implemented
    int sum = 0;
    for (int i=0, len=hex.length(); i<len; i++) {
      char c = hex.charAt(i);
      int num = charToInt(c);
      sum = sum * 16 + num;
    }
    return sum;
  }
}

public class HexToInt {
  public static void main(String[] args) {
    int dec = BaseConverter.hexToInt("ABC");
    System.out.println(dec);
  }
}
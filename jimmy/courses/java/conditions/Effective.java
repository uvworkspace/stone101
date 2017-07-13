class TestCls {
  public static void run() {
    boolean A = false;
    boolean B = true;
    boolean C = true;
    if (!(A || B || C) == /* code */ true) 
      System.out.println(true);
    else 
      System.out.println(false);

    if (!(A && !(B || C)) == /* code */ true) 
      System.out.println(true);
    else 
      System.out.println(false);

    if (!(!(A && B) && C) == /* code */ true) 
      System.out.println(true);
    else 
      System.out.println(false);
  }
}

public class Effective {
  public static void main(String[] args) {
    TestCls.run();
  }
}
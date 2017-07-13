class TestCls {
  public static void run() {
    // ouput results
    System.out.println(5.0 / 4);
    System.out.println(5 / 4.0);
    System.out.println((int) 5.0 / 4);
    System.out.println((double) 5.0 / 4);
    System.out.println((double) (5 / 4));
    System.out.println(5.2 % 2);
  }
}

public class OpTest {
  public static void main(String[] args) {
    TestCls.run();
  }
}
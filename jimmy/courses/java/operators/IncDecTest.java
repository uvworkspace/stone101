class TestCls {
  public static void run() {
    int x = 9;
    // output x++ < 10
    System.out.println(x++ < 10);
    x = 9;
    // output ++x < 10
    System.out.println(++x < 10);
  }
}

public class IncDecTest {
  public static void main(String[] args) {
    TestCls.run();
  }
}
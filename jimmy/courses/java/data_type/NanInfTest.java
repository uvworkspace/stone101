class TestCls {
  public static void run() {
    double num1 = 0.0 / 0.0;
    double num2 = 1.0 / 0.0;
    double num3 = -1.0 / 0.0;
    
    System.out.println(num1);
    System.out.println(num2);
    System.out.println(num3);
  }
}

public class NanInfTest {
  public static void main(String[] args) {
    TestCls.run();
  }
}
class TestCls {
  public static void run() {
    int a=2, b=3;
    int answer1;
    double answer2;
    
    // 1. assign a/b to answer1
    answer1 = a/b; 
    System.out.println("a=" + a + " b=" + b + " answer1=" + answer1);
    // 2. assign (double)(a/b) to answer2
    answer2 = (double)(a/b); 
    System.out.println("a=" + a + " b=" + b + " answer2=" + answer2);    
    // 3. assign (double)a/b to answer2
    answer2 = (double) a/b; 
    System.out.println("a=" + (double)a + " b=" + b + " answer2=" + answer2);

    int num = 5;
    double realNum = num;
    System.out.println("num=" + num + " realNum=" + realNum);

    realNum = 6.79;
    int intNum2;
    // 4. assign realNum to intNum2
    intNum2 = (int) realNum;
    System.out.println("realNum=" + realNum + " intNum2=" + intNum2);

    //int num1 = 3.14; // compile-time error
    //int num2 = -3.14; // compile-time error
  }
}

public class TypeConv {
  public static void main(String[] args) {
    TestCls.run();
  }
}
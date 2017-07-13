class TestCls {
  public static void run() {
    int x;
    /* 1. assign 1024 * 1024 * 1024 * 2 to x, output x */
    // to be implemented
    x = 1024 * 1024 * 1024 * 2;
    System.out.println(x);
    /* 2. assign 1024 * 1024 * 1024 * 2 - 1 to x, output x */
    // to be implemented
    x = 1024 * 1024 * 1024 * 2 - 1;
    System.out.println(x);
    /* 3. assign 1024 * 1024 * 1024 * 2 * 2 to x, output x */
    // to be implemented
    x = 1024 * 1024 * 1024 * 2 * 2;
    System.out.println(x);
    
    System.out.println("max int: " + Integer.MAX_VALUE + " min int: " + Integer.MIN_VALUE);
    
    /* you can use Math.pow(base, exponent) */
    
    float a;
    a = 1024;
    /* 4. assign a^111 to a, output a */
    // to be implemented
    a = (float)Math.pow(a, 111);
    System.out.println("a=" + a);
    
    a = -1024;
    /* 5. assign a^111 to a, output a */
    // to be implemented
    a = (float)Math.pow(a, 111);
    System.out.println("a=" + a);
    
    System.out.println("max float: " + Float.MAX_VALUE + " min float: " + Float.MIN_VALUE);

    double m;  
    m = 1024;
    /* 6. assign m^111 to m, output m */
    // to be implemented
    m = (float)Math.pow(m, 111);
    System.out.println("m=" + m);
  
    m = -1024;
    /* 7. assign m^111 to m, output m */
    // to be implemented
    m = (float)Math.pow(m, 111);
    System.out.println("m=" + m);

    System.out.println("max double: " + Double.MAX_VALUE + " min double: " + Double.MIN_VALUE);
  }
}

public class Overflow {
  public static void main(String[] args) {
    TestCls.run();
  }
}
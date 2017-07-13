class Round {
  public static int positive(double x) { 
    // to be implemented
    return (int) (x + 0.5);
  }
  
  public static int negative(double x) {
    // to be implemented
    return (int) (x - 0.5);
  }
}

public class Rounding {
  public static void main(String[] args) {
    double x1 = Round.positive(3.14);
    double x2 = Round.negative(-3.14);
    System.out.println("x1=" + x1 + " x2=" + x2);
  }
}
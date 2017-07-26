
public class Test {
  public static void main(String[] args) {
    // System.out.println("HELLO");
    System.out.println("cnt " + Greeter.getCount());
    Greeter t = new Greeter("Bob");
    t.hello();
    Greeter s = new Greeter("Alice");
    s.hello();
    
  }
}


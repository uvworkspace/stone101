
public class Greeter {
  private static int cnt = 0;
  public static int getCount() {
    return cnt;
  }
  
  private String name;
  public Greeter(String name) {
    this.name = name;
    cnt += 1;
  }
  public void hello() {
    System.out.println("hello " + this.name
      + " cnt " + getCount());
  }
}


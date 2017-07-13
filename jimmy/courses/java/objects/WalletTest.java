class Wallet {
  public String name;
  private String _state;
  private int _accesses;
  private double _balance;
  public static int numWallet = 0;
  public static final double RATE = 10;

  // default constructor
  public Wallet() {
    this.name = "unknown";
    this._balance = 0;
    this._accesses = 0;
    numWallet++;
  }

  // constructor with arguments
  public Wallet(String name, double balance) {
    this.name = name;
    this._balance = balance;
    this._accesses = 0;
    numWallet++;
  }

  // accessor
  public double getBalance() {
    return _balance;
  }

  public int getAccesses() {
    return _accesses;
  }

  //mutators
  public void deposit(double amount) { 
    _balance += amount;
    _incAccesses();
  }

  public void deposit(int pts) { 
    _balance += pts / RATE;
    _incAccesses();
  }

  public void withdraw(double amount) {
    /* implementation code */ 
    _balance -= amount;
    _incAccesses();
  }

  public void withdraw(int pts) { 
    _balance -= pts / RATE;
    _incAccesses();
  }

  public void transfer(Wallet target, double amount) {
    withdraw(amount);
    target.deposit(amount);
  }

  private void _incAccesses() {
    _accesses++;
  }

  // static method
  public static double dollarToPoints(double amount) {
    return amount * RATE;
  }
}

public class WalletTest {
  // public, private and static variables
  public static void test1() {
    Wallet w1 = new Wallet();
    System.out.println(w1.name);
    //System.out.println(w1._state); // compile-time error
      
    Wallet w2 = new Wallet();
    System.out.println(Wallet.numWallet);  // output 2
    System.out.println(Wallet.RATE);  // output 30
  }
  
  // public, private and static functions
  public static void test2() {
    Wallet w = new Wallet();    
    w.deposit(1000.0);
    w.withdraw(500.0);
    //w.incAccesses(); // compile-time error
    System.out.println(w.getAccesses());
  
    double points = Wallet.dollarToPoints(100);
    System.out.println(points);
  }
  
  // constructor
  public static void test3() {
    Wallet w1 = new Wallet();
    Wallet w2 = new Wallet("Jimmy", 1000);
    System.out.println(w1.getBalance());
    System.out.println(w2.getBalance());
  }
  
  // overloading
  public static void test4() {
    Wallet w1 = new Wallet();
    Wallet w2 = new Wallet("Jimmy", 1000);
    w1.deposit(100.0);
    System.out.println(w1.getBalance());
    w2.withdraw(1000.0);
    System.out.println(w2.getBalance());
    
    Wallet w3 = new Wallet();
    Wallet w4 = new Wallet("Jack", 1000);
    w3.deposit(100);
    System.out.println(w3.getBalance());
    w4.withdraw(1000);
    System.out.println(w4.getBalance());
  }
  
  // reference
  public static void test5() {
    int a = 100;
    double b = a;
    b = 200;
    System.out.println(a);
    System.out.println(b);
  
    Wallet w1 = new Wallet("Jimmy", 1000);
    Wallet w2 = w1;
    w2.deposit(1000.0);
    System.out.println(w1.getBalance());
    System.out.println(w2.getBalance());
  }
  
  public static void increase1(int a) {
    a = 100;
  }
  public static void increase2(Wallet w) {
    w.deposit(100.0);
  }
  
  public static void test6() {
    int a = 100;
    increase1(a);
    System.out.println(a);
  
    Wallet w = new Wallet("Jimmy", 1000);
    increase2(w);
    System.out.println(w.getBalance());
  }
  
  public static void main(String[] args) {
    Wallet w1 = new Wallet();
    Wallet w2 = new Wallet("Jimmy", 1000);
    w1.deposit(100.0);
    System.out.println(w1.getBalance());
    w2.withdraw(1000.0);
    System.out.println(w2.getBalance());
    
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
  }
}
import java.util.ArrayList;
import java.util.List;
import java.util.LinkedList;

public class Bank {
  public static void main(String[] args) {
    BankAccount ba = new BankAccount("BoB", 100);
    BankAccount ba2 = new BankAccount("Alice", 10);
    ba.save(200); // prints 300 balance
    ba2.save(20);
    ba.save(150); // prints 450 balance
    ba2.save(15);
    ba.printHistory();
    ba2.printHistory();
  }
}

class Transaction{
    String rtrans="";
    int rcash=0;
    static int id=0;
    String rid="";
    public Transaction(String trans, int money){
        id++;
        rid=Integer.toString(id);
        rtrans=trans;
        rcash=money;
    }
    public void printInfo(){
        System.out.println("Trans "+rid+" "+rtrans+" $ "+rcash);
    }
}

class BankAccount{
    String rname="";
    int rmoney=0;
    List<Transaction> arr_trans = new ArrayList<Transaction>();
    public BankAccount(String name, int money){
        rname=name;
        rmoney=money;
    }
    public void save(int add){
        rmoney+=add;
        arr_trans.add(new Transaction("deposit",rmoney));
        System.out.println("Hi "+rname+", you have "+rmoney+" dollars now");
    }
    public void printHistory(){
        for (int i=0;i<arr_trans.size();i++){
            arr_trans.get(i).printInfo();
        }
    }
}
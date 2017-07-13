class TimeData {
  public static final int DAY_HOURS = 24;
  public static final int HOUR_MINS = 60;
  public static final int MIN_SECS = 60;
  
  public static void run() {
    System.out.println(TimeData.DAY_HOURS);
    System.out.println(TimeData.HOUR_MINS);
    System.out.println(TimeData.MIN_SECS);
  }
}

public class ConstTest {
  public static void main(String[] args) {
    TimeData.run();
  }
}
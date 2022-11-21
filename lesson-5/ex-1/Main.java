public class Main {
  public static void main(String[] args) {
    Euro euro = new Euro(100);
    System.out.println(euro.balance());
    Currency euro1 = euro.subtractedCurrency(30, "GBP");
    System.out.println(euro1.balance());
    Currency euro2 = euro1.addedCurrency(30, "USD");
    System.out.println(euro2.balance());
    System.out.println(euro2.abbreviation());
    System.out.println(euro2.symbol());

  }
}
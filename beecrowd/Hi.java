public class Hi {
    private int y=7;
    private int c = 9;  //static using and without using.
    public   void ab (){
        System.out.println("hi");
    }
    public static void main(String[] args) {
         Hi n = new Hi();
         
        n.ab(); //without using static we can  use n.ab().but the value will insert as n's object.
        System.out.println(n.y);
        System.out.println(n.c);
    }
}

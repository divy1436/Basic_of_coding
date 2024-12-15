public class c12methodOverloading {
    static void change(int a){
        a=89;
    }
    static void change2(int []arr){
       arr[0]=95 ;
    }
    static void foo(){
        System.out.println("Good morning bro!");

    }
    static void foo(int a){
        System.out.println("Good morninng "+ a + " bro");
    }
    static void foo(int a,int b){
        System.out.println("Good morninng "+ a + " bro");
        System.out.println("Good morninng "+ b + " bro");
    }
        static void tellJokes(){
            System.out.println("I am a don");
        }
        public static void main(String[] args) {
          //  tellJokes();
        //   Case1: Changing the interger 
        //   int x=96;
        //   change(x);
        // //   System.out.println(x);
        // int [] marks ={45,56,45,78,85};
        // change2(marks);
        // System.out.println(marks[0]);
        foo();
        foo(800);
        foo(45, 850);


        }
}

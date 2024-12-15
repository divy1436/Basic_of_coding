public class c14recursion {
    static int factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }
    public static void main(String[] args) {
        int n=4;
        System.out.println(factorial(n));
        int h=8;
        System.out.println(factorial(h));
    }
}

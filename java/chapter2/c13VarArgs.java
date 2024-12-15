public class c13VarArgs {
    // static int sum(int a, int b){
    //     return a+b;
    // }
    // static int sum(int a, int b, int c){
    //     return a+b+c;
    // }
    static int sum(int ...arr){
        int result =0;
        for(int a: arr){
            result +=a;
        }
        return result;
    }
    public static void main(String[] args) {
        System.out.println("Welcom to VarArgs Tutorial");
        System.out.println(sum(4, 7));
        System.out.println(sum(4,5, 7));
        System.out.println(sum(4,4,7,7,7));
        
    }
}

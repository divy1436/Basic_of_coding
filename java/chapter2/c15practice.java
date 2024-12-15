public class c15practice {
    // Print a multipication table of given numbers
    // static void multipication(int n){
    //     for(int i=1; i<=10;i++){
    //         System.out.format("%d X %d =%d\n",n,i,n*i);
    //     }
    // }
    // public static void main(String[] args) {
        
    //     multipication(5);
    //     multipication(54);
    // }
   
       // Print a pattern 
    
        // static void pattern(int n) {
        //     for (int i = 0; i < n; i++) {
        //         for (int j = 0; j < i + 1; j++) {
        //             System.out.print("*"); // Print star without a newline
        //         }
        //         System.out.println(); // Move to the next line
        //     }
        // }
    
        // public static void main(String[] args) {
        //     pattern(9);
        //     pattern(2); // Call the pattern method
        // }

        //Write a recusive fuction to calculate sum of first n natural numbers
         static int sum(int n){
         if(n==1){
            return 1;
         }
         return n + sum(n-1);
        }
        public static void main(String[] args) {
            int c= sum(5);
            System.out.println(c);
        }
    }
    



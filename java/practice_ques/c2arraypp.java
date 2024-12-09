package java.practice_ques;

public class c2arraypp {
    public static void main(String[] args) {
        float[] makrs ={44.2f,25.2f,52.1f,44.4f};
        float sum=0;
        for(float elememt:makrs){
            sum=sum+elememt;

        }
        System.out.println("The value of sum"+ sum/makrs.length);
    }
}

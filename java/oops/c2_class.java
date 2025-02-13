class Car{
    String brand;
    int Speed;
    Car(String brand, int Speed){
        this.brand=brand;
        this.Speed=Speed;
    }
    void showDetails(){
        System.out.println("Car brand:" + brand);
        System.out.println("Speed" + Speed + "km/h");
    }
}
public class c2_class {
    public static void main(String[] args) {
        Car myCar =new Car("toyota", 1200);
        myCar.showDetails();
    }
    
}
 


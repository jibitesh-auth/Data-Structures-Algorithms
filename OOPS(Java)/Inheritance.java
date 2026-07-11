//Base Class
class Vehicle{
    String numberOfVehicle;
    public Vehicle(String numberOfVehicle){
        this.numberOfVehicle = numberOfVehicle;
    }
    public void honk(){
        System.out.println("Honk!!!!");
    }

    public void printNumberOfVehicle(){
        System.out.println(numberOfVehicle);
    }


}

//Derived Classes
class Car extends Vehicle{

    public Car(String numberOfCar){
        super(numberOfCar);
    }

}

//Derived Classes
class Bus extends Vehicle{

    public Bus(String numberOfBus){
        super(numberOfBus);
    }

}

class Inheritance{
    public static void main(String[] args){
        Car car = new Car("KA01KJ9876");
        car.printNumberOfVehicle();
        car.honk();


        Bus bus = new Bus("KA08JU7643");
        bus.printNumberOfVehicle();
        bus.honk();


    }
}



//------------------------x----------------------------------------


// class Vehicle{
//     public void honk(){
//         System.out.println("Honk!!!!");
//     }
 
// }
 
 
 
// class Car extends Vehicle{
//     private String numberOfCar;
//     public Car(String numberOfCar){
//         this.numberOfCar = numberOfCar;
//     }
 
//     public void printCarNumber(){
//         System.out.println(numberOfCar);
//     }
 
 
// }
 
// class Bus{
//     private String numberOfBus;
//     public Bus(String numberOfBus){
//         this.numberOfBus = numberOfBus;
//     }
 
//     public void printBusNumber(){
//         System.out.println(numberOfBus);
//     }
// }
 
// class Inheritance{
//     public static void main(String[] args){
//         Car car = new Car("KA01KJ9876");
//         car.printCarNumber();
//         car.honk();
 
 
//         Bus bus = new Bus("KA08JU7643");
//         bus.printBusNumber();
 
 
//     }
// }
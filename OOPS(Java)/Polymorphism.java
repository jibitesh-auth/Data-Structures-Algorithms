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

    @Override
    public void honk(){
        System.out.println("Give me way");
    }

}

//Derived Classes
class Bus extends Vehicle{

    public Bus(String numberOfBus){
        super(numberOfBus);
    }

}

class Polymorphism{
    public static void main(String[] args){
        Car car = new Car("KA01KJ9876");
        car.printNumberOfVehicle();
        car.honk();


        Bus bus = new Bus("KA08JU7643");
        bus.printNumberOfVehicle();
        bus.honk();


        Vehicle vehicle = new Vehicle(null);
        

    }
}

//hello
interface Animal{
    void bark();
    // static void sleep(){
    //     System.out.println("Sleeping...");

    // }

    default void sleep(){
        System.out.println("Sleeping...");

    }


}
interface Pet{
    void ownerName();
}

class Dog implements Animal,Pet {
    public void bark(){
        System.out.println("Bark!!");

    }

    public void ownerName(){
        System.out.println("XYZZZ!!");
    }
    // @Override
    public void sleep(){
        System.out.println("Dog is sleeping");
        // super.sleep();
    }

}

class Cat implements Animal{
    public void bark(){
        System.out.println("Meowwwww");

    }

    
}



class Interface{
    public static void main(String[] args){
        // Animal.sleep();
        Dog dog = new Dog();
        dog.bark();
        dog.sleep();
        dog.ownerName();
        Cat cat = new Cat();
        cat.bark();
        cat.sleep();
        


    }
    }

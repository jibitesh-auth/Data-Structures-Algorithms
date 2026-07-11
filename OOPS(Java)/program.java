// class Test{
//     public static void printTest(){
//         System.out.println("Hello");
//     }
// }

// class program{
//     public static void main(String[] args) {
//         Test.printTest();
//     }
// }

//-----------------x--------------

// import java.util.Scanner;
// class Test{
//     public void printTest(){
//         System.out.println("Hello");
//     }
// }

// class program{
//     public static void main(String[] args) {
//         Test test = new Test();
//         test.printTest();
//     }
// }


//-----------------x--------------



// import java.util.Scanner;
// class Test{
//     int age;
//     public void assignAge(int num){
//         age = num;
        
//     }
// }

// class program{
//     public static void main(String[] args) {
//         Test test = new Test();
//         test.assignAge(10);
//         Test test2 = new Test();
//         test2.assignAge(19);

//         System.out.println(test.age);
//         System.out.println(test2.age);
//     }
// }



//-----------------x--------------



// import java.util.Scanner;
// class Solution{
//     public void printNumber(Scanner sc){
//         int num = sc.nextInt();
//         System.out.println(num);
//     }
// }


// class program{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         Solution s1 = new Solution();
//         s1.printNumber(sc);
//     }

// }




//-----------------x--------------




// import java.util.Scanner;
// class Test{
//     int age;
//     //void method
//     public void assignAge(int num){
//         age = num;
        
//     }
// }

// class program{
    // private static void prinnt(){
    //     System.out.println("print called");
    // }

    //  private static int num(){
    //     return 10;
    // }


    // public static void main(String[] args) {
        // prinnt();
        
        // Test test = new Test();
        // test.assignAge(10);
        // Test test2 = new Test();
        // test2.assignAge(19);

        // System.out.println(test.age);
        // System.out.println(test2.age);

//         System.out.println(num());
//     }
// }


//------------X---------------------

//Paramaterized Function

class Test{
    public int sum(int num1, int num2){
        return num1+num2;
    }
}

class program{
    public static void main(String[] args){
        Test test = new Test();
        System.out.println(test.sum(10,15));
    }
}





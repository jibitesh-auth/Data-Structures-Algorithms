// import java.util.Scanner;

// class Conditional1{
//     public static void main(String[] args){
//         Scanner scanner = new Scanner(System.in);

//         int age = scanner.nextInt();
//         if(age >= 18){
//             System.out.println("Adult");
//         }
//         else{
//             System.out.println("Teen");

//         }
//         scanner.close();

//     }
// }


//-----------x----------------

// import java.util.Scanner;
// class Conditional1{
//     public static void main(String[] args){
//         Scanner scanner = new Scanner(System.in);
//         int marks = scanner.nextInt();

        //if-elif-else

        // if(marks >= 90){
        //     System.out.println("A");
        // }
        // else if(marks >= 70){
        //     System.out.println("B");
        // }
        // else if(marks >= 50){
        //     System.out.println("C");
        // }
        // else if(marks >= 35){
        //     System.out.println("D");
        // }
        // else{
        //     System.out.println("Fail");
        // }

        //nested
        
//         if(marks>=90){
//             System.out.println("Grade A");
//         }
//         else{
//             if(marks>=70){
//                 System.out.println("Grade B");
//             }
//             else{
//                 if(marks >= 50){
//                     System.out.println("Grade C");
//                 }
//                 else{
//                     if(marks >= 35){
//                         System.out.println("Grade D");
//                     }
//                     else{
//                         System.out.println("Fail");
//                     }
//                 }
//             }
//         }

//         scanner.close();
//     }
// }


//----------x---------------------

import java.util.Scanner;
class Conditional1{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a= scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        // if(a>b && a>c){
        //     System.out.println(a);
        // }
        // else if(b > a && b > c){
        //     System.out.println(b);
        // }
        // else if(c > b && c >a){
        //     System.out.println(c);
        // }
        // else{
        //     System.out.println("No one is greatest");
        // }

        //nested
        if(a > b){
            if(a > c){
                System.out.println(a);

            }
            else {
                System.out.println(c);

            }
        }
        else{
            if(b>c){
            System.out.println(b);
            }
            else{
                System.out.println(c);
            }
        }
        
        scanner.close();
    }
}
import java.util.Scanner;

class Input_Output{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        // int num = scanner.nextInt();
        // double num = scanner.nextDouble();
        // String num = scanner.nextLine();

        String firstName = scanner.next();
        String lastName = scanner.next();

        System.out.println(firstName + " " + lastName);
        
        scanner.close();

    }
}
import java.util.Scanner;
class Loop1{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        // int i;
        // for(i = 1; i<=10; i++ ){
        //     System.out.println("My name is Jibitesh");
        // }

        // for(i=2; i<=50; i=i+2){
        //     System.out.println(i);
        // }
        int j;

        int i = scanner.nextInt();
        int[] arr = new int[i];
        int sum=0;
        for(j=0; j<i; j++){
            arr[j] = scanner.nextInt();
            sum+=arr[j];
        }
        for(j =0; j<i; j++){
            System.out.println(arr[j]);
        }
        System.out.println("Sum: "+ sum);


        scanner.close();

    }
}
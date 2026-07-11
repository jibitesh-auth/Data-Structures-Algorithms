// class Test{
//     public Test(){
//         System.out.println("test constructor called");
//     }
//     public void printHello(){
//         System.out.println("Hello");
//     }
// }

// class Constructor{
//     public static void main(String[] args) {
//         Test test = new Test();
//         test.printHello();
//     }
// }



// class BankAccount{
//     double balance;
//     public BankAccount(){
//         // balance = 100.0;
//     }
//     public void printBalance(){
//         System.out.println(balance);
//     }
// }

// class Constructor{
//     public static void main(String[] args) {
//         BankAccount test = new BankAccount();
//         test.printBalance();
//     }
// 

// }

//_______________X____________

//Parameterized Contructor


// class BankAccount{
//     double balance;
//     String accountType;
//     public BankAccount(double _balance){
//         balance = _balance;
//         accountType = "Savings";
//     }

//         public BankAccount(double _balance, String _accountType){
//         balance = _balance;
//         accountType = _accountType;
//     }
//     public void printBalance(){
//         System.out.println(balance);
//     }

//     public void printAccountType(){
//         System.out.println(accountType);
//     }
// }

// class Constructor{
//     public static void main(String[] args) {
//         BankAccount test = new BankAccount(100);
//         test.printBalance();
//         test.printAccountType();

//         BankAccount test1 = new BankAccount(200, "Current");
//         test1.printBalance();
//         test1.printAccountType();


//     }
// }


class BankAccount{
    double balance;
    String accountType;
    public BankAccount(double balance){
        this.balance = balance;
        accountType = "Savings";
    }

        public BankAccount(double balance, String accountType){
        this.balance = balance;
        this.accountType = accountType;
    }
    public void printBalance(){
        System.out.println(balance);
    }

    public void printAccountType(){
        System.out.println(accountType);
    }
}

class Constructor{
    public static void main(String[] args) {
        BankAccount test = new BankAccount(100);
        test.printBalance();
        test.printAccountType();

        BankAccount test1 = new BankAccount(200, "Current");
        test1.printBalance();
        test1.printAccountType();


    }
}



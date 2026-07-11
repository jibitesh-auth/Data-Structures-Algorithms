class BankAccount{
    private double balance;
    public BankAccount(double balance){
        this.balance = balance;
    }

    public void setBalance(double balance){
        this.balance = balance;
    }

    public double getBalance(){
        //logic of checking if he is a bank employee
        return balance;
    }

    public void printBalance(){
        System.out.println(balance);
    }

}

class Encapsulation{
    public static void main(String[] args) {
        BankAccount test = new BankAccount(100);
        test.printBalance();
        test.setBalance(900);
        System.out.println(test.getBalance());
        
        // test.balance =0.0;
        // test.printBalance(); //Issue 

    }
}

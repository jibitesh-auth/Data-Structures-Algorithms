//Base Class
abstract class BankAccount{
    
    private double balance;
    abstract void addMoney(double amount);
    abstract void canUserWithdrawMoney(double amount);
    void updateBalance(double _balance){
        balance = _balance;
    }

    public double getBalance(){
        return balance;
    }
}


//Derived Class
class SavingAccount extends BankAccount{
    public void addMoney(double amount){
        super.updateBalance(super.getBalance()+amount);


    }
    public void canUserWithdrawMoney(double amount){
        if(amount <= super.getBalance()){
            System.out.println("User can");

        }
        else{
            System.out.println("User cannot");
        }


    }
}

//Derived Class
class CurrentAccount extends BankAccount{
    double minimumLimit = 1000.0;


    public void addMoney(double amount){
        super.updateBalance(super.getBalance()+amount);

    }
    public void canUserWithdrawMoney(double amount){
        if(super.getBalance() - amount >= minimumLimit){
            System.out.println("User can");
        }
        else{
            System.out.println("User cannot");
        }



    }
}

class Abstraction{
    public static void main(String[] args){
        // BankAccount be = new BankAccount();
        CurrentAccount c = new CurrentAccount();
        c.addMoney(5000);
        c.canUserWithdrawMoney(200);
        System.out.println(c.minimumLimit);


        
    }
}
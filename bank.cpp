#include <iostream>
// This is for doing for all the OPPS programming
using  namespace  std;

class Bank {
private:
    string name;
    int accNo;
    string  accountType;
    float balanceAmount;


public:
    void setDetails(string n , int ac , string at , float bA){

        name = n;
        accNo = ac;
        accountType = at;
        balanceAmount = bA;
    }
    void amountDeposit(int amt){
        balanceAmount = balanceAmount + amt;
    }
    void withdraw(int withdrawAmt){

        if(withdrawAmt > balanceAmount){
            cout << "The Amount is more than the balance Amount" ;
        }

        cout << " the total amount is " << balanceAmount << endl ;
        balanceAmount = balanceAmount - withdrawAmt;
        cout << "Amount after with draw" << balanceAmount;


    }
    void displayNameAndBalance(){
        cout << " the total amount is " << name << endl ;
        cout << "Balance " << balanceAmount;

    }


};

int main() {

    Bank b1;
    string name;
    int accountNo;
    string AccountType ;
    int balanceAmount;

    cout << "Enter the name";
    cin >> name;

    cout << "Enter the Account no ";
    cin >> accountNo;

    cout << "Enter the Account type";
    cin >> AccountType;

    cout << "Enter the balacne account";
    cin >> balanceAmount;


    b1.setDetails(name , accountNo  , AccountType , balanceAmount);
        
    int n;
    cout << "Enter the 1 for Deposit , 2 for display , 3 for withdraw : ";
    cin >> n;

    switch (n) {
        case 1:
            int depositAmount;
            cout << "Enter amount to deposit: ";
            cin >> depositAmount;
            b1.amountDeposit(depositAmount);
            break;

        case 2:
            b1.displayNameAndBalance();
            break;

        case 3:
            int withdrawAmount;
            cout << "Enter amount to withdraw: ";
            cin >> withdrawAmount;
            b1.withdraw(withdrawAmount);
            break;

        default:
            cout << "Invalid option. Please enter 1, 2, or 3." << endl;
            break;
    }



    return 0;
}

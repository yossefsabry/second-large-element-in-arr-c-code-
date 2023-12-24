#include <iostream>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    int balance;

    public:

    BankAccount(): accountNumber(0), balance(0) {}
    BankAccount(int a, int b): accountNumber(a), balance(b) { cout << "check Account ....\n"; }  

    void withdraw(int m) {
        if ( m > balance) {
            cout << "the the  money is more than the balance ....\n";
        }
        else {
            cout << "you withdraw: " << m << ", from the balance\n";
            balance -= m; 
        }
    }
    void deposit(int x) {
        cout << "you deposit: " << x << ", in your account \n";
        balance += x;
    }
    int display() {
        return balance;
    }

};

int main() {
    BankAccount s2(79324792, 2000);
    s2.withdraw(3999); // check the balance 
    s2.withdraw(1000); // -1000
    s2.deposit(300); // +300

    cout <<" ----------------\n";
    cout << "the balacnce: " << s2.display() << endl;
    return 0;
}
#include <iostream>
#include <iomanip> 
using namespace std;


void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){

double balance = 123;
int choice = 0;

do{
    cout << "*******************\n";
    cout <<"enter your choice:\n";
    cout << "*******************\n";
    cout << "1. Show Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";
    cin >> choice;
    cin.clear();
    fflush(stdin);

    switch(choice){
        case 1: showBalance(balance);
            break;
        case 2: balance += deposit();
                showBalance(balance);
            break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
            break;
        case 4: cout << "Thanks for visiting\n";
            break;
        default: cout <<"Invalid Choice\n";
    }
}while(choice != 4);

return 0;
}

void showBalance(double balance){
    cout << "your balance is: $" << setprecision(2) << fixed << balance << '\n';
}
double deposit(){
    double amount = 0;

    cout <<"Enter amount to deposit: ";
    cin >> amount; 

    if(amount > 0){
        return amount;
    }
    else{
        cout << "Thats not a valid amount: \n";
        return 0;
    }
    return amount;
}
double withdraw(double balance){

    double amount = 0;

    cout << "enter amount to be withdrawn: ";
    cin >> amount;

    if(amount>balance){
        cout << "Insuffecient funds\n";
        return 0;
    }
    else if(amount < 0){
        cout <<"thats not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
    return amount;
}

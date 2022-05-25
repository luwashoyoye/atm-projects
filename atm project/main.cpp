//
//  main.cpp
//  atm project
//
//  Created by Luwop  on 5/24/22.
//

#include <iostream>
using namespace std;

void showMenu() {
    cout << "*********MENU*********" << endl;
    cout << "1. Check Your Balance" << endl;
    cout << "2. Deposit Cash" << endl;
    cout << "3. Deposit Check" << endl;
    cout << "4. Withdraw" << endl;
    cout << "5. Exit ATM" << endl;
    cout << "***********************" << endl;
}

int main()
{
    //check balance, deposit cash, deposit cheque, withdraw, show menu
    int option;
    double balance = 1000;
    
    do{
    showMenu();
    cout << "Option: ";
    cin >> option;
    system("cls");
    switch (option) {
        case 1: cout<< "Balance is:  "<<balance<< "$" << endl; break;
        case 2: cout<< "Deposit Cash Amount:";
            double depositCashAmount;
            cin >> depositCashAmount;
            balance += depositCashAmount;
            break;
        case 3: cout<< "Deposit Check Amount:";
            double depositCheckAmount;
            cin >> depositCheckAmount;
            balance += depositCheckAmount;
            break;
        case 4: cout<< "Withdraw Amount:";
            double withdrawAmount;
            cin >> withdrawAmount;
            balance += withdrawAmount;
            if(withdrawAmount<=balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough money" << endl;
            break;
    }
    } while (option !=5);
        



    return 0;
}

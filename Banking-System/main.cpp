//***********************************************************
//Authur.....: Sean Kelly
//assignment.: banking system
//discription: This program will mock a banking system
//************************************************************
#include<iostream>
using namespace std;

int main(){
    int option;
    double avaivable = 0.0;
    double total;

    while(true) {
        cout << " ======Banking System===== " << endl;
        cout << " 1.Deposit money" << endl;
        cout << " 2.Withdraw money" << endl;
        cout << " 3.Check Balance" << endl;
        cout << " 4.Exit" << endl;
        cout << " ========================= " << endl;
        cout << " pick one please" << endl;
        cin >> option;
    
        switch(option) {
            case 1:
                cout << "enter the total to deposit";
                cin >> total;
                if (total > 0) {
                    avaivable += total;
                    cout << " money deposited new total is: " << avaivable << endl;
                
                } else {
                    cout << "this amount does not work" << endl;
                } break;

            case 2:
            cout << "please enter the amount to withdraw";
            cin >> total;
            if (total > 0 & total <= avaivable){
                avaivable -= total;
                cout << " new total is: " << avaivable << endl;
            } else if(total > avaivable){
                cout << "no funds left" << endl;
            } else {
                cout << " not enough money!" << endl;
            }
            break;

            case 3: 
            cout << " current balance" << avaivable << endl;
            break;
            
            case 4: 
            cout << "exiting, thank you!" << endl;
            return 0;
        }
    
        }    
    return 0;
}    
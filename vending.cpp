#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main () {

//========================DECLARATION OF VARIABLES===================================
    string done_insertBills = string();
    int dollar_choice = int();
    double bills[5] = {0, 1, 5, 10, 20};
    double bill_inserted[4];
    int i = 0;

    //------------------------------------------------------------------------------------
    //WELCOME MESSAGE
    cout << "Welcome to this vending machine" << endl;
    cout << endl << endl;
    //------------------------------------------------------------------------------------


    //USER INSERTS BILLS
    cout << "Please insert your bills:" << endl;
    cout << "(Type the number option according to the bill you are inserting, up to 5 bills can be inserted)" << endl;

    do{

        //MOVES ON TO THE NEXT PLACE IN ARRAY
        i++;


        cout << "========================================" << endl;

        cout << "[1]" << right << setw(10) << "$1" << endl;
        cout << "[2]" << right << setw(10) << "$5" << endl;
        cout << "[3]" << right << setw(10) << "$10" << endl;
        cout << "[4]" << right << setw(10) << "$20" << endl;
        cout << "-----------------------------------" << endl;
        cout << endl << "Option# ";
        cin >> dollar_choice;
        cout << endl;

//=================USER HAS INSERTED BILL OF CHOICE===============================
        //DECLARE WHAT EACH OPTIONS GETS MADE INTO
        if (dollar_choice < 5){
            bill_inserted[i] = bills[dollar_choice];
        }
        else if (dollar_choice >= 5){
            //MAKE SURE USER DOES NOT DECLARE AN OPTION THAT IS NOT THERE
            cout << "That is an invalid choice!" << endl;
        }
        cout << endl;

//=========================GIVE USER OPTION TO FINISH TRANSACTION==============================
        cout << "Thank you, are you done now?" << endl;
        cout << "(Type in yes or no)" << endl;
        cout << endl;
        cin >> done_insertBills;

    } while(done_insertBills != "yes" );


    //BEGIN DOING BALANCE FOR USER
    double balance = 0;

//================FOR LOOP TO ADD ALL VALUES INSIDE ARRAY====================
    balance = bill_inserted[0] + bill_inserted[1] + bill_inserted[2] + bill_inserted [3] + bill_inserted [4];

    cout << "Your total balance is: $" << balance << endl;


//====================================RECEIVED MONEY FROM USER NOW BUY=============================================================


    //Showed balance, now give buying options
    cout << "Below are our options" << endl;


    cout << "========================================" << endl;
    cout << left << setw(15) << "Coke" << "$1" << endl;
    cout << left << setw(15) << "Gatorade" << "$1.50" << endl;
    cout << left << setw(15) << "Juice Box" << "$.75" << endl;

    cout << "========================================" << endl;

}

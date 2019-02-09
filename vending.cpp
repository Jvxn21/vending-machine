#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main () {

//========================DECLARATION OF VARIABLES===================================
    string done_insertBills = string();
    int dollar_choice = int();
    double bills[5] = {0, 1, 5, 10, 20};
    double bill_inserted[5];
    int i = 0;
    double drink_price[4] = {.75, 1.50, .50, 1.00};
    string choice_done = string();


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

    cout << endl << endl;
    cout << "____________________________" << endl;
    cout << "Your total balance is: $" << balance << endl;
    cout << "----------------------------" << endl;
    

//====================================RECEIVED MONEY FROM USER NOW BUY=============================================================


    //Showed balance, now give buying options
    cout << "Today we are offering the following options:" << endl;
    do {
        
        
        
        cout << "========================================" << endl;
        cout << endl << setw(20) << left << "DRINKS" << endl;
        cout << setw(20) << left << "-------" << endl;
        cout << "[1] " << setw(20) << left << "Juice Box" << "$" << drink_price[0] << endl;
        cout << "[2] " << setw(20) << left << "Sports Drink" << "$" << drink_price[1] << endl;
        cout << "[3] " << setw(20) << left << "Water Bottle" << "$" << drink_price[2] << endl;
        cout << "[4] " << setw(20) << left << "Soda Pop" << "$" << drink_price[3] << endl;
        cout << endl;
        cout << "========================================" << endl;
        cout << endl << "Please input your choice: ";
        int choice_user = int();
        cin >> choice_user;
        if (choice_user > 4){
            cout << "That is not a valid choice!" << endl;
        }
        
        
        
        
        balance = balance - drink_price[choice_user - 1];
        
        if (balance < 0){
            choice_done = "yes";
        }
        
        cout << endl << endl << "Are you done making choices?" << endl << endl;
        cin >> choice_done;
        cout << endl;
    } while (choice_done != "yes");
    
    cout << endl << "Thank you for shopping here today" << endl << "Here is your change: $" << balance << endl << endl;
    
}

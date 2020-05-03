// Joshua Meza, Javaher Fundamentals 1, Bank statement project

#include <iostream>
#include <string>
using namespace std;



// currency option 
void currency_english() // english version to make code neat
{
    string choice;
    double usd, conversion;
    cout << " What currency type would you like to convert? " << endl;
    cout << " 1.US Dollar to Euro type (1)" << endl;
    cout << " 2.US Dollar British Pound type (2)" << endl;
    cout << " 3.US Dollar Austrailian Dollar type (3)" << endl;
    cin >> choice;

    if (choice.compare("1") == 0) {
        cout << "How much would you like to convert?" << endl;
        cin >> usd;
        conversion = (usd * .91);
        cout << "You have converted " << usd << " USD to " << conversion << " Euros" << endl;
    }
    if (choice.compare("2") == 0) {
        cout << "How much would you like to convert?" << endl;
        cin >> usd;
        conversion = (usd * .78);
        cout << "You have converted " << usd << " USD to " << conversion << " British Pound" << endl;
    }
    if (choice.compare("3") == 0) {
        cout << "How much would you like to convert?" << endl;
        cin >> usd;
        conversion = (usd * 1.53);
        cout << "You have converted " << usd << " USD to " << conversion << " Australian Dollars" << endl;
    }
    
}

void currency_spanish() { // had to make a sepeare file to translate it easily and have neat code
    string choice;
    double usd, conversion;
    cout << " Que tipo de moneda te gustaria convertir? " << endl;
    cout << " 1.Para convertir dolar estadounidense a Euro escriba (1)" << endl;
    cout << " 2.Para convertir dolar estadounidense libra Esterlina escriba (2)" << endl;
    cout << " 3.Para convertir dolar estadounidense a Australiano escriba (3)" << endl;
    
    cin >> choice;

    if (choice.compare("1") == 0) {
        cout << "Cuanto le gustaria convertir?" << endl;
        cin >> usd;
        conversion = (usd * .91);
        cout << "Usted ha convertido " << usd << " Dolares Estadounidense a " << conversion << " Euros" << endl;
    }
    if (choice.compare("2") == 0) {
        cout << "Cuanto le gustaria convertir?" << endl;
        cin >> usd;
        conversion = (usd * .78);
        cout << "Usted ha convertido " << usd << " Dolares Estadounidense a " << conversion << " libra Esterlina" << endl;
    }
    if (choice.compare("3") == 0) {
        cout << "Cuanto le gustaria convertir?" << endl;
        cin >> usd;
        conversion = (usd * 1.53);
        cout << "Usted ha convertido " << usd << " Dolares Estadounidense a " << conversion << " Australiano escriba" << endl;
    }
}

// sub menu's 
void english() {


    // running english
    int user_choice;
    do {
        cout << "\nwelcome to the bank statement manager who is logging in?\n"
            << "1. My Account\n";
        cin >> user_choice;
        cout << endl;

        switch (user_choice)
        {

        case 1:
        

            double account_total, amount, after_total;
            account_total = 380;


            string  input;

            cout << "\nYour banking statement.\n"
                << "\nwhat would you like to see.\n"
                << "To view account balance type (balance)\n"
                << "To withdraw type (withdraw)\n"
                << "To deposit type (deposit)\n"
                << "To view transaction history type (history)\n"
                << "To convert currency (currency)\n"
                << "To quit the program type (quit)\n" << endl;
            cin >> input;
            if (input.compare("balance") == 0) {
                cout << "Account total is: " << account_total << endl;
            }

            if (input.compare("withdraw") == 0)
            {
                cout << " How much would you like to withdraw from account balance" << endl;
                cin >> amount;
                after_total = account_total - amount;
                cout << "This is your new balance: $ " << after_total << endl;
                if (amount < 0)
                {
                    cout << "Warning you have overdrafted" << endl;
                }
            }

            if (input.compare("deposit") == 0)
            {
                cout << " How much would you like to deposit to account balance" << endl;
                cin >> amount;
                after_total = account_total + amount;
                cout << "This is your new balance: $ " << after_total << endl;
                if (amount < 0);
            }

            if (input.compare("history") == 0)
            {
                cout << "Transaction: \t Starting Out with C++ from Control Structures to Objects (8th Edition)" << endl;
                cout << " \t \t Gaddis, Tony " << endl;
                cout << "\t \t Sold by: Avitar Books" << endl;
                cout << " \t \t $39.94 " << endl;
                cout << "   " << endl;  //spaces
                cout << "   " << endl;  //spaces
                cout << "Transaction: \t Mini DisplayPort to HDMI" << endl;
                cout << "\t \t Sold by: BenfeiDirect" << endl;
                cout << "\t \t $6.95" << endl;
                cout << "   " << endl;  //spaces
                cout << "   " << endl;  //spaces
            }

            if (input.compare("currency") == 0) {
                // void for currency to clean up int main 
        
                currency_english();

            }
            
            if (input.compare("quit") == 0)
            {
                cout << " Back to Main Menu" << endl;
            }
            break;

        }
    } while (user_choice > 1 && user_choice < 4);
}

void spanish() 
            {

                // running spanish

                int user_choice;
                do {
                    cout << "\nBienvenido al administrador del extracto bancario. Elige una cuenta. \n";
                    cout << "1. Mi Cuenta\n";
                    cin >> user_choice;
                    cout << endl;

                    switch (user_choice)
                    {
                   
                    case 1:

                        double account_total, amount, after_total;
                        account_total = 380;


                        string  input;

                        cout << "\nSu extracto bancario.\n"
                            << "\n Que le gustaria ver?\n"
                            << "Para ver el tipo de saldo de cuenta escriba (saldo)\n" 
                            << "Para retirar dinero escriba (retirar)\n"
                            << "Para depositar escriba (depositar)\n"
                            << "Para ver el historial de transacciones escriba (historial)\n"
                            << "Para convertir moneda (moneda)\n" 
                            << "Para salir del tipo de programa escriba (salir)\n" << endl;
                        cin >> input;
                      
                        if (input.compare("saldo") == 0) {
                            cout << "El total de la cuenta es : " << account_total << endl;
                        } 

                        if (input.compare("retirar") == 0)
                        {
                            cout << "Cuanto le gustaria retirar del saldo de la cuenta ? " << endl;
                            cin >> amount;
                            after_total = account_total - amount;
                            cout << "Este es tu nuevo saldo: $ " << after_total << endl;
                            if (amount < 0)
                            {
                                cout << "Advertencia que ha sobregirado de su cuenta" << endl;
                            }
                        }

                        if (input.compare("depositar") == 0)
                        {
                            cout << "Cuanto le gustaria depositar en el saldo de la cuenta?" << endl;
                            cin >> amount;
                            after_total = account_total + amount;
                            cout << "Este es tu nuevo saldo: $ " << after_total << endl;
                        }

                        if (input.compare("historial") == 0)
                        {
                            cout << "Transacciones: \t Comenzando con C ++ de estructuras de control a objetos (edición 8)" << endl;
                            cout << " \t \t Gaddis, Tony " << endl;
                            cout << "\t \t Vendido por : Avitar Books" << endl;
                            cout << " \t \t $39.94 " << endl;
                            cout << "   " << endl;  //spaces
                            cout << "   " << endl;  //spaces
                            cout << "Transacciones: \t Mini DisplayPort a HDMI" << endl;
                            cout << "\t \t Vendido por : BenfeiDirect" << endl;
                            cout << "\t \t $6.95" << endl;
                            cout << "   " << endl;  //spaces
                            cout << "   " << endl;  //spaces
                        }
                       
                        if (input.compare("moneda") == 0) {
                            // void for currency to clean up int main 

                            currency_spanish();

                        }

                        if (input.compare("salir") == 0)
                        {
                            cout << "volviendo al menu principal" << endl;
                        }
                        break;

                    }
                } while (user_choice > 1 && user_choice < 4);
            }


// activates all functions into cohesive execution
int main(){
                // calling english and spanish function

                string input;
                cout << "Please select a language" << endl;
                cout << "Type (english) for english" << endl;
                cout << "Escriba (espanol) para espanol" << endl;
                cin >> input;
                if (input.compare("english") == 0)
                {
                    english();
                }
                if (input.compare("espanol") == 0)
                {
                    spanish();
                }
            }
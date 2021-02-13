#include <iostream>
#include <math.h>
#include "binToOct.h"
#include "checkBinary.h"
#include "decimalToBinary.h"
#include "binaryToDecimal.h"
#include "octalToBinary.h"
#include "hexaToDecimal.h"
#include "menu.h"
#include "octalCheck.h"
using namespace std;



int main()
{
    printMenu();
    int choice;
    cout << "Enter your choice" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        long int binaryToDecimalNumber;
        int resultOne;
        bool numberCheck;
        cout << "You have chosen binary to decimal Conversion" << endl;
        cout << "Enter a binary number to convert" << endl;
        cin >> binaryToDecimalNumber;
        numberCheck = checkBinary(&binaryToDecimalNumber);
        if (numberCheck == true)
        {
            resultOne = binaryToDecimal(binaryToDecimalNumber);
            cout << "Conversion Done respective binary number is " << resultOne;
        }
        else
        {
            cout << "Invalid Binary Number" << endl;
            
            while (1)
            {
                cout << "Try Again" << endl;
                cin >> binaryToDecimalNumber;
                if (checkBinary(&binaryToDecimalNumber))
                break;
            }
            resultOne = binaryToDecimal(binaryToDecimalNumber);
            cout << "Conversion Done " << resultOne;
        }
        
        break;

    case 2:
        int decimalToBinaryNumber, resultTwo;
        cout << "You have chosen decimal to binary Conversion" << endl;
        cout << "Enter a decimal number to convert" << endl;
        cin >> decimalToBinaryNumber;
        resultTwo = decimalToBinary(decimalToBinaryNumber);
        cout << "Conversion Done respective binary number is " << resultTwo;
        break;
        
    case 3:
        bool status;
        long int binaryNumber;
        cout << "You have chosen binary to octal Conversion" << endl;
        cout << "Enter a binary number to convert" << endl;
        cin >> binaryNumber;
        status = checkBinary(&binaryNumber);
        if (status == true)
        {
            cout << "Conversion done " << changeBinaryToOctal(binaryNumber);
        }

        else if (status == false)
        {
           
            cout << "Invalid Binary Number" << endl;
            
             while(1)
             {
                cout << "Try Again" << endl;
                 cout << "Enter a binary number to convert" << endl;
                cin >> binaryNumber;
                if (checkBinary(&binaryNumber))
                break;
             }
            cout << "Conversion Done " << changeBinaryToOctal(binaryNumber);
            
        }
        break;
    
    case 4:
        int octalNumber, resultFour;
        bool statusOne;
        cout << "You have chosen octal to binary Conversion" << endl;
        cout << "Enter a octal number to convert" << endl;
        cin >> octalNumber;
        statusOne = checkOctal(octalNumber);
        if(statusOne)
        {
            resultFour = octalToBinary(octalNumber);
            cout << "Conversion Done Respective Binary Number is " << resultFour << endl;
        }
        else
        {
              cout << "Invalid Octal Number" << endl;
                  while(1)
             {
                cout << "Try Again" << endl;
                cout << "Enter a octal number to convert" << endl;
                cin >> octalNumber;
                if (checkOctal(octalNumber))
                break;
             }
            cout << "Conversion Done " << octalToBinary(octalNumber);
        }
       
        break;

    case 5:
        char hexaNumber[20];
        cout<<"You have chosen HexaDecimal to Decimal Conversion "<<endl;
        cout<<"Enter a HexaDecimal Number" <<endl;
        cin>>hexaNumber;
        cout<<"Conversion Done. The respective decimal number is " << hexaDecimalToDecimal(hexaNumber);
        break;
    default:
        cout << "Invalid Entry";
        break;
    }
    return 0;
}

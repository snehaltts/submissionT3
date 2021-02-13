#include<iostream>
#include<math.h>
using namespace std;

int changeBinaryToOctal(int binaryNumber)
{
    int octalNumber  = 0, decimalNumber = 0, a = 0;
    while(binaryNumber !=0)
    {
        decimalNumber = decimalNumber + (binaryNumber%10)*pow(2,a);
        ++a;
        binaryNumber = binaryNumber/10;
    }
    a =1;
    while (decimalNumber!=0)
    {
        octalNumber = octalNumber + (decimalNumber%8)*a;
        decimalNumber = decimalNumber/8;
        a = a * 10;
    }
    
    return octalNumber;
}


#include<iostream>
#include<math.h>
// #include "binary.h"
using namespace std;


bool checkBinary(long int *number)
{
    // if(number)
    int copy, temp = 0;
    copy = *number;

    while (copy != 0) {
        temp = copy % 10;

        if ((temp == 0) || (temp == 1))
         {
            copy = copy / 10;
            if (copy == 0)
            {
                return true;
            }
        }
        else 
        {
            return false;
        }
    }
}

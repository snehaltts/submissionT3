#include<iostream>
using namespace std;

long octalToBinary(int oct)
   {
        int dec = 0, i = 0;
        long bin = 0;
    
        while(oct != 0)
        {
            int remiander = oct%10;
            int res=remiander * pow(8,i);
            dec += res;
            i++;
            oct/=10;
        }
        i = 1;
        
        while (dec != 0)
        {
            int remainder = dec % 2;
            bin += remainder * i;
            dec /= 2;
            i *= 10;
        }
        return bin;
    }

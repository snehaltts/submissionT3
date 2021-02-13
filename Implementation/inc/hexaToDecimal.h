#include <iostream>
#include <math.h>
#include<string.h>

int hexaDecimalToDecimal(char n[]) {
   int lengthOfNumber = strlen(n);
   int base = 1;
   int tempVar = 0;
   for (int i=lengthOfNumber-1; i>=0; i--) {
      if (n[i]>='0' && n[i]<='9') {
         tempVar += (n[i] - 48)*base;
         base = base * 16;
      }
      else if (n[i]>='A' && n[i]<='F') {
         tempVar += (n[i] - 55)*base;
         base = base*16;
      }
   }
   return tempVar;
}
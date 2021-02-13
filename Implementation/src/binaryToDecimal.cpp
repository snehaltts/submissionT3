#include<iostream>
using namespace std;

int binaryToDecimal(long int a)
{
    int r,c=0,i=1;
    while(a>0)
    {
        r=a%10;
        c=c+r*i;
        i=i*2;
        a=a/10;
    }
    return c;
}
#include<iostream>
using namespace std;

int checkOctal(int n)
{
 
    int j,r;
    bool checkStatus;
    for(j=0;j<1;j++)
    {
        r=n%10;
        if(r>7)
        {
            return false;
        }
}

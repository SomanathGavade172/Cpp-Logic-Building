#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Check Second Bit Program
//  Description      : This program checks whether the second bit of given number is ON or OFF using bitwise AND operation.
//  Input            : Integer
//  Output           : Displays status of second bit (ON/OFF)
//  Author           : Gavade Somanath Vilas
//  Date             : 17/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iMask = 0x2;
    int iResult = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    iResult = iValue & iMask;

    if(iResult == 0)
    {
        cout << "Second Bit is OFF\n";
    }
    else
    {
        cout << "Second Bit is ON\n";
    }

    return 0;
}
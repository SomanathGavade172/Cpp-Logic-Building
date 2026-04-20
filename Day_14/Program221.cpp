#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Toggle Bit Program
//  Description         :   This application accepts a number and toggles its 5th bit using bitwise XOR operation.
//  Input               :   Integer (number)
//  Output              :   Displays number after toggling 5th bit
//  Author              :   Gavade Somanath Vilas
//  Date                :   18/04/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iMask = 0x10;
    int iResult = 0;
    
    cout << "Enter a Number : \n";
    cin >> iValue;

    iResult = iValue ^ iMask;

    cout << "Number after bit Toggle is : " << iResult << "\n";
   
    return 0;
}
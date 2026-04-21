#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   ToggleBit
//  Description         :   This function accepts a number and toggles its 5th bit using bitwise XOR operation.
//  Input               :   Integer (number)
//  Output              :   Returns number after toggling 5th bit
//  Author              :   Gavade Somanath Vilas
//  Date                :   18/04/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int ToggleBit(int iNo)
{
    int iMask = 0x10;
    int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Toggle Bit Program
//  Description         :   This application accepts a number and toggles its 5th bit using bitwise XOR operation.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout << "Enter a Number : \n";
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout << "Number after bit Toggle is : " << iRet << "\n";
   
    return 0;
}
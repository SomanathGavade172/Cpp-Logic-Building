#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   ToggleBit
//  Description         :   This function accepts a number and bit position, then toggles that bit using bitwise XOR operation.
//  Input               :   Integer (number), Integer (bit position)
//  Output              :   Returns number after toggling specified bit
//  Author              :   Gavade Somanath Vilas
//  Date                :   18/04/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int ToggleBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Toggle Bit Program
//  Description         :   This application accepts a number and bit position, then toggles the specified bit.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iLocation = 0;
    int iRet = 0;
    
    cout << "Enter a Number : \n";
    cin >> iValue;

    cout << "Enter Position : \n";
    cin >> iLocation;

    iRet = ToggleBit(iValue, iLocation);

    cout << "Number after bit Toggle is : " << iRet << "\n";
   
    return 0;
}
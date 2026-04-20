#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CheckBit
//  Description      : Checks whether the 14th, 15th and 16th bits of given number are ON using bitwise AND operation.
//  Input            : Integer
//  Output           : Returns true if all three bits are ON, otherwise false
//  Author           : Gavade Somanath Vilas
//  Date             : 18/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckBit(int iNo)
{
    int iMask = 0xE000;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Check Multiple Bits Program
//  Description         :   This application accepts a number from the user and checks whether its 14th, 15th and 16th bits are ON.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter a Number : \n";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout << "14th, 15th & 16th bits are ON\n";
    }
    else
    {
        cout << "One or more bits are OFF\n";
    }

    return 0;
}
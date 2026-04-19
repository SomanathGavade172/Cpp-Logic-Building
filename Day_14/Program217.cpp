#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CheckBit
//  Description      : Checks whether the 17th bit of given number is ON or OFF using bitwise AND operation.
//  Input            : Integer
//  Output           : Returns true if 17th bit is ON, otherwise false
//  Author           : Gavade Somanath Vilas
//  Date             : 18/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckBit(int iNo)
{
    int iMask = 0x10000;
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
//  Application Name    :   Check 17th Bit Program
//  Description         :   This application accepts a number from the user and checks whether its 17th bit is ON or OFF.
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
        cout << "17th bit is ON\n";
    }
    else
    {
        cout << "17th bit is OFF\n";
    }

    return 0;
}
#include<iostream>
using namespace std;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CheckBit
//  Description      : Checks whether the fifth bit of given number is ON or OFF using bitwise AND operation.
//  Input            : Integer
//  Output           : Returns true if fifth bit is ON, otherwise false
//  Author           : Gavade Somanath Vilas
//  Date             : 17/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckBit(int iNo)
{
    int iMask = 0x10;
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
//  Application Name    :   Check Fifth Bit Program
//  Description         :   This application accepts a number from the user and checks whether its fifth bit is ON or OFF.
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
        cout << "Bit is ON\n";
    }
    else
    {
        cout << "Bit is OFF\n";
    }

    return 0;
}
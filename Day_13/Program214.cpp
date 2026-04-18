#include<iostream>
using namespace std;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CheckBit
//  Description      : Checks whether both 3rd and 7th bits of given number are ON using bitwise AND operation.
//  Input            : Integer
//  Output           : Returns true if both bits are ON, otherwise false
//  Author           : Gavade Somanath Vilas
//  Date             : 17/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckBit(int iNo)
{
    int iMask = 0x44;
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
//  Description         :   This application accepts a number from the user and checks whether its 3rd and 7th bits are ON.
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
        cout << "3rd and 7th Bits are ON\n";
    }
    else
    {
        cout << "3rd and 7th Bits are OFF\n";
    }

    return 0;
}
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CheckBit
//  Description      : Checks whether the given bit position of a number is ON or OFF using bitwise AND operation.
//  Input            : Integer (number), Integer (bit position)
//  Output           : Returns true if specified bit is ON, otherwise false
//  Author           : Gavade Somanath Vilas
//  Date             : 18/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckBit(int iNo, int iPos)
{
    int iResult = 0;
    int iMask = 0x1;

    iMask = iMask << (iPos - 1);

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
//  Application Name    :   Check Bit Program
//  Description         :   This application accepts a number and bit position from the user and checks whether that bit is ON or OFF.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iLocation = 0;
    bool bRet = false;

    cout << "Enter a Number : \n";
    cin >> iValue;

    cout << "Enter the position : \n";
    cin >> iLocation;

    bRet = CheckBit(iValue, iLocation);

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

/*

    iPos : 9

    iMask   0000    0000    0000    0000    0000    0000    0000    0001        0x1

                            iMask = iMask << (iPos - 1);
                            

    iMask   0000    0000    0000    0000    0000    0001    0000    0000

*/
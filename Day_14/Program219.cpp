#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Check Multiple Bits Program
//  Description         :   This application accepts a number from the user and checks whether its 14th, 15th and 16th bits are ON.
//  Input               :   Integer
//  Output              :   Returns true if all three bits are ON, otherwise false
//  Author              :   Gavade Somanath Vilas
//  Date                :   18/04/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iPos = 0;
    int iMask = 0x1;

    cout << "Enter a Number : \n";
    cin >> iValue;

    cout << "Enter the position : \n";
    cin >> iPos;

    iMask = iMask << (iPos - 1);

    cout << "Mask is : " << iMask << "\n";

    return 0;
}

/*

    iPos : 9

    iMask   0000    0000    0000    0000    0000    0000    0000    0001        0x1

                            iMask = iMask << (iPos - 1);
                            iMask = iMask << 8;

    iMask   0000    0000    0000    0000    0000    0001    0000    0000



*/
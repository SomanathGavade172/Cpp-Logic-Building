#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Decimal to Binary Conversion (Reverse Order)
//  Description      : This program converts given decimal number into binary format and displays it in reverse order.
//  Input            : Integer
//  Output           : Displays binary representation (in reverse)
//  Author           : Gavade Somanath Vilas
//  Date             : 16/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo = 83;
    int iDigit = 0, iCnt = 0, iSize = 0;
    int Arr[32];

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        Arr[iCnt] = iDigit;
        iCnt++;
        iNo = iNo / 2;
    }

    iSize = iCnt;
    for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        cout << Arr[iCnt] << "\t";
    }

    cout << "\n";

    return 0;
}
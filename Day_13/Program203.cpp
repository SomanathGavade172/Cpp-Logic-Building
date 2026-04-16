#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Bitwise Operations Program
//  Description      : This program performs bitwise AND, OR and XOR operations on two integers.
//  Input            : Two integers
//  Output           : Displays result of bitwise operations
//  Author           : Gavade Somanath Vilas
//  Date             : 16/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo1 = 13;
    int iNo2 = 24;

    int iAns = 0;

    iAns = iNo1 & iNo2;
    cout << "Bitwise And : " << iAns << "\n";

    iAns = iNo1 | iNo2;
    cout << "Bitwise Or : " << iAns << "\n";

    iAns = iNo1 ^ iNo2;
    cout << "Bitwise XOR : " << iAns << "\n";

    return 0;
}
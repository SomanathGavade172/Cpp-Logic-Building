#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   OnBit
//  Description         :   This function accepts a number and bit position, then turns ON that bit using bitwise OR operation.
//  Input               :   Integer (number), Integer (bit position)
//  Output              :   Returns number after turning ON specified bit
//  Author              :   Gavade Somanath Vilas
//  Date                :   18/04/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int OnBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo | iMask;

    return iResult;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   On Bit Program
//  Description         :   This application accepts a number and bit position, then turns ON the specified bit.
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

    iRet = OnBit(iValue, iLocation);

    cout << "Number after bit ON : " << iRet << "\n";
   
    return 0;
}

/*

                    1   0   1   1   1   0   0   0       iNo
              |     0   0   0   1   0   0   0   0       iMask            
                    ______________________________
                    1   0   1   1   1   0   0   0       iResult


                    1   0   1   0   1   0   0   0       iNo
              |     0   0   0   1   0   0   0   0       iMask            
                    ______________________________
                    1   0   1   1   1   0   0   0       iResult

*/
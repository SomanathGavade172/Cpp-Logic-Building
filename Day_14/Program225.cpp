#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   OffBit
//  Description         :   This function accepts a number and bit position, then turns OFF that bit using bitwise AND operation.
//  Input               :   Integer (number), Integer (bit position)
//  Output              :   Returns number after turning OFF specified bit
//  Author              :   Gavade Somanath Vilas
//  Date                :   18/04/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int OffBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Off Bit Program
//  Description         :   This application accepts a number and bit position, then turns OFF the specified bit.
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

    iRet = OffBit(iValue, iLocation);

    cout << "Number after bit Off : " << iRet << "\n";
   
    return 0;
}

/*
                    1   0   1   1   1   0   0   0       iNo
                    1   1   1   0   1   1   1   1       iMask            
                    ______________________________
                    1   0   1   0   1   0   0   0       iResult

                    1   0   1   0   1   0   0   0       iNo
                    1   1   1   0   1   1   1   1       iMask            
                    ______________________________
                    1   0   1   0   1   0   0   0       iResult



                    1111    1111    1111    1111    1111    1111    1110    1111
                    f       f       f       f       f       f       e       f

*/
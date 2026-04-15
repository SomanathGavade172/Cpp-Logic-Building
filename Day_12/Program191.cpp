#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Dynamic Array Input and Display Program
//  Description      : This program accepts number of elements from user, stores them in dynamic array, and displays them.
//  Input            : Integer values
//  Output           : Displays elements of array
//  Author           : Gavade Somanath Vilas
//  Date             : 15/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0;
    int *Arr = NULL;                // Data (Characterstics)

    cout << "Enter number of elements that you want to store : \n";
    cin >> iLength;

    Arr = new int[iLength];         // Resource Allocation (Constructor)

    cout << "Enter " << iLength << " elements : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin >> Arr[iCnt];           // Logic (Function -> Accept())
    }

    cout << "Values from the Array are : \n";
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout << Arr[iCnt] << "\n";  // Logic (Function -> Display())
    }

    delete []Arr;                   // Resource Deallocation (Destructor)

    return 0;
}
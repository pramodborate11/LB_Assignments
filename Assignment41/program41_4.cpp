///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Fact
//  Description :   return the Factorial of digits of a number
//  Input:          Integer
//  output :        Integer
//  Author :        Pramod Khandu Borate
//  Date :          02/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>                            
using namespace std ;


int Fact(int iNo)
{
    static int iCnt = 1 ;
    static int iFact = 1 ;
    if(iCnt <= iNo)
    {
        iFact = iFact*iCnt;
        Fact(iNo);
    }
    return iFact;

}

int main()
{   
    int iValue = 0;
    int iRet =0 ;

    cout<<"Enter the number:"<<"\n";
    cin>>iValue;

    iRet = Fact(iValue);
    cout<<"Factorial of digits "<<iRet<<"\n"; 
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Input : 5                    Output:5  *  4  *  3  *  2  *  1  *
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Sum
//  Description :   return the summation od digits of a number
//  Input:          Integer
//  output :        Integer
//  Author :        Pramod Khandu Borate 
//  Date :          02/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>                            
using namespace std ;


int Sum(int iNo)
{
    static int iDigit = 0 ;
    static int iSum = 0 ;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10 ;
        iSum = iSum + iDigit;
        Sum(iNo);
    }
    return iSum;

}

int main()
{   
    int iValue = 0;
    int iRet =0 ;

    cout<<"Enter the number:"<<"\n";
    cin>>iValue;

    iRet = Sum(iValue);
    cout<<"Summation of digits "<<iRet<<"\n"; 
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Input : 123                    Output:Summation of digits 6
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
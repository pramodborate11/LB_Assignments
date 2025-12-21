///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Product
//  Description :   return the  product of digits of a number
//  Input:          Integer
//  output :        Integer
//  Author :        Pramod Khandu Borate
//  Date :          02/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>                            
using namespace std ;


int Product(int iNo)
{
    static int iDigit = 0 ;
    static int iProduct = 0 ;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10 ;
        iProduct = iProduct + iDigit;
        Product(iNo);
    }
    return iProduct;

}

int main()
{   
    int iValue = 0;
    int iRet =0 ;

    cout<<"Enter the number:"<<"\n";
    cin>>iValue;

    iRet = Product(iValue);
    cout<<"Product of digits "<<iRet<<"\n"; 
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Input : 123                    Output:Product of digits 6
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
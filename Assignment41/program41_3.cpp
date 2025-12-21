///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlen
//  Description :   return the letters in the string
//  Input:          String
//  output :        Integer
//  Author :        Pramod Khandu Borate
//  Date :          02/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>                            
using namespace std ;


int strlen(char Brr[])
{
    static int iCnt = 0;

    if(*Brr != '\0')
    {
        iCnt++;
        Brr++;
        strlen(Brr);
    }
    return iCnt ;

}

int main()
{   
    char Arr[50]= {'\0'};
    int iRet = 0 ;

    cout<<"Enter the String :";
    cin>>Arr;

    iRet = strlen(Arr);
    cout<<"number of  letters in string :"<<iRet<<"\n";

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Input :Hello                   Output:number of  letters in string :5
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
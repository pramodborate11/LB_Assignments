///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name  : ArrayX
//  Description : prototype of functions
//  Input       : Nothing
//  Output      : Nothing
//  Author      : Pramod Khandu Borate
//  Date        : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class ArrayX
{
    public:
        T * Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        void Reverse();
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ArrayX
//  Description    : used to intialize the members(Constructor)
//  Input          : frequency  to be counted
//  Output         : Nothing
//  Author         : Pramod Khandu Borate
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
ArrayX<T> :: ArrayX(int no)
{
    iSize = no;
    Arr = new T[iSize];
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ArrayX
//  Description    : used to Deallocate the members(Constructor)
//  Input          : Nothing
//  Output         : Nothing
//  Author         : Pramod Khandu Borate
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
ArrayX<T> :: ~ArrayX()
{
    delete [] Arr;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Accept
//  Description    : Accept the elements of Array
//  Input          : Nothing
//  Output         : Nothing
//  Author         : Pramod Khandu Borate
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void ArrayX<T> :: Accept()
{
    int iCnt = 0 ;
    cout<<"Enter the elements\n";

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Reverse
//  Description    : Reverse the Array
//  Input          : Nothing
//  Output         : Nothing
//  Author         : Pramod Khandu Borate 
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void ArrayX<T> :: Reverse()
{
    int iCnt = 0;
    
    T temp;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(iCnt <= iSize)
        {
           temp = Arr[iCnt];
           Arr[iCnt] = Arr[iSize];
           Arr[iSize] = temp;
        }
    }

    iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt];
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
/*-------------------------------------INTEGER----------------------------------------*/

    int iLength = 0;
    cout<<"Enter the length of Array for integer :-\n";
    cin>>iLength;
    ArrayX<int>*ipobj = new ArrayX<int>(iLength);
    ipobj->Accept();
    ipobj->Reverse();

/*----------------------------------------DOUBLE----------------------------------------*/

    int dLength = 0;
    cout<<"Enter the length of Array for double :-\n";
    cin>>dLength;

    ArrayX<double>*dpobj = new ArrayX<double>(dLength);
    dpobj->Accept();
    dpobj->Reverse();

/*--------------------------------------FLOAT--------------------------------------------*/

    int fLength = 0;
    cout<<"Enter the length of Array for float :-\n";
    cin>>fLength;

    ArrayX<float>*fpobj = new ArrayX<float>(fLength);
    fpobj->Accept();
    fpobj->Reverse();

/*-------------------------------------CHARRACTER------------------------------------------*/

    int cLength = 0;
    cout<<"Enter the length of Array for Char :-\n";
    cin>>cLength;

    ArrayX<char>*cpobj = new ArrayX<char>(cLength);
    cpobj->Accept();
    cpobj->Reverse();

/*---------------------------------------------------------------------------------------------*/
    delete cpobj;
    delete fpobj;
    delete dpobj;
    delete ipobj;

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Input1: 3         Input2: 11          Input3: 11 12 12                      Output: 0
//      Input1: 0         Input2: 0.0         Input3: 0                             Output: 0
//      Input1: 3         Input2: 6.2         Input3: 233.32  232.3 6.2             Output: 2
//      Input1: 5         Input2: M           Input3: D A S R M                     Output: 4
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name  : Arithmatic
//  Description : prototype of functions
//  Input       : Nothing
//  Output      : Nothing
//  Author      : Pramod Khandu Borate 
//  Date        : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
class Arithmatic
{
    public:
        T Value1;
        T Value2;

        Arithmatic(T,T);
        void multiplication();

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Arithmatic
//  Description    : used to intialize the chartracterstics(Constructor)
//  Input          : Integer , Integer, float ,float, double, double
//  Output         : Nothing
//  Author         : Pramod Khandu Borate
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
Arithmatic <T> :: Arithmatic(T Value1 , T Value2)
{
    this->Value1 = Value1;
    this->Value2 = Value2;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : multiplication
//  Description    : Display the multiplication of two numbers 
//  Input          : Integer ,Integer ,float , float, double, double
//  Output         : Integer , float, double
//  Author         : Pramod Khandu Borate
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void Arithmatic<T> :: multiplication()
{
    T Ans = 0;
    Ans = Value1 * Value2;
    cout<<"Multiplication of two numbers is : "<<Ans<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
/*-------------------------------------INTEGER----------------------------------------*/

    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"------------------------------------------------\n";
    cout<<"Enter first number : \n";
    cin>>iNo1;

    cout<<"Enter second number : \n";
    cin>>iNo2;
    
    Arithmatic<int> *aiobj = new Arithmatic<int>(iNo1 , iNo2);
    aiobj->multiplication();

/*--------------------------------------FLOAT--------------------------------------------*/

    float fNo1 = 0;
    float fNo2 = 0;

    cout<<"------------------------------------------------\n";
    cout<<"Enter first number : \n";
    cin>>fNo1;

    cout<<"Enter second number : \n";
    cin>>fNo2;
    
    Arithmatic<float> *afobj = new Arithmatic<float>(fNo1 , fNo2);
    afobj->multiplication();

/*----------------------------------------DOUBLE----------------------------------------*/

    
    double dNo1 = 0;
    double dNo2 = 0;

    cout<<"------------------------------------------------\n";
    cout<<"Enter first number : \n";
    cin>>dNo1;

    cout<<"Enter second number : \n";
    cin>>dNo2;
    
    Arithmatic<double> *adobj = new Arithmatic<double>(dNo1 , dNo2);
    adobj->multiplication();

/*---------------------------------------------------------------------------------------------*/
    delete aiobj;
    delete afobj;
    delete adobj;
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : 5 , 2               Output : Multiplication of two numbers is : 10 
//  Input : 2.04 , 2.58         Output : Multiplication of two numbers is : 5.2632
//  Input : 3.4567 , 6.5789     Output : Multiplication of two numbers is : 22.74128363
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
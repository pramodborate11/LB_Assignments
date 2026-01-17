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
        T Value3;

        Arithmatic(T,T,T);
        void Max();

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Arithmatic
//  Description    : used to intialize the chartracterstics(Constructor)
//  Input          : Integer , Integer, Integer, float ,float, float, double, double, double
//  Output         : Nothing
//  Author         : Pramod Khandu Borate
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
Arithmatic <T> :: Arithmatic(T Value1 , T Value2 , T Value3)
{
    this->Value1 = Value1;
    this->Value2 = Value2;
    this->Value3 = Value3;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : multiplication
//  Description    : Display the multiplication of two numbers 
//  Input          : Integer, Integer, Integer, float , float, float, double, double, double
//  Output         : Integer , float, double
//  Author         : Pramod Khandu Borate
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void Arithmatic<T> :: Max()
{
    if(Value1>Value2 && Value1>Value3)
    {
        cout<<"Maximum number is : "<<Value1<<"\n";
    }
    else if (Value2>Value1 && Value2>Value3)
    {
        cout<<"Maximum number is : "<<Value2<<"\n";
    }
    else
    {
        cout<<"Maximum number is : "<<Value3<<"\n";
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

    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    cout<<"------------------------------------------------\n";
    cout<<"Enter First number : \n";
    cin>>iNo1;

    cout<<"Enter Second number : \n";
    cin>>iNo2;

    cout<<"Enter Third number : \n";
    cin>>iNo3;
    
    Arithmatic<int> *aiobj = new Arithmatic<int>(iNo1 , iNo2 , iNo3);
    aiobj->Max();

/*--------------------------------------FLOAT--------------------------------------------*/

    float fNo1 = 0;
    float fNo2 = 0;
    float fNo3 = 0;

    cout<<"------------------------------------------------\n";
    cout<<"Enter First number : \n";
    cin>>fNo1;

    cout<<"Enter Second number : \n";
    cin>>fNo2;

    cout<<"Enter Third number : \n";
    cin>>fNo3;
    
    Arithmatic<float> *afobj = new Arithmatic<float>(fNo1 , fNo2 , fNo3);
    afobj->Max();

/*----------------------------------------DOUBLE----------------------------------------*/

    
    double dNo1 = 0;
    double dNo2 = 0;
    double dNo3 = 0;

    cout<<"------------------------------------------------\n";
    cout<<"Enter First number : \n";
    cin>>dNo1;

    cout<<"Enter Second number : \n";
    cin>>dNo2;

    cout<<"Enter Third number : \n";
    cin>>dNo3;
    
    Arithmatic<double> *adobj = new Arithmatic<double>(dNo1 , dNo2 , dNo3);
    adobj->Max();

/*---------------------------------------------------------------------------------------------*/
    delete aiobj;
    delete afobj;
    delete adobj;
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : 11,55,66                Output : Maximum number is : 66 
//  Input : 1.23,2.34,6.57          Output : Maximum number is : 6.57
//  Input : 2.3456,6.5487,9.6321    Output : Maximum number is : 9.6321
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
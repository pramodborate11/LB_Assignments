///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Description :   insert data into linked list
//  Input :         Address , Integer
//  Author :        Pramod Khandu Borate
//  Date :          15/12/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>           
#include<stdlib.h>          

struct node
{
    int data ;

    struct node *next ;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE ;

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));      

    newn->next = NULL;
    newn->data = no;

    if(*first == NULL)
    {
        *first = newn ;
    }
    else
    {
        newn->next =*first;
        *first = newn;
    }

}
///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display the Linked list 
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    int iCnt = 0;
    printf("Input linked list :");

    while(first != NULL)
    {
        printf(" |%d| ->",first->data);
        first = first->next ;
    }
    printf("NULL\n");
}
///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionElement
//  Description :   return sum of elements of linked list  
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int AdditionElement(PNODE first)
{
    int iCnt = 0;
    int iSum= 0 ;

    while(first != NULL)
    {
        iSum = iSum +(first->data);

        first = first->next ;
    }
    
    return iSum ;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0 ;

    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);
    iRet = AdditionElement(head);

    printf("Addition of element is : %d", iRet);

    return 0 ;

}

///////////////////////////////////////////////////////////////////////////////
//
//  Input linked list : |10| -> |20| -> |30| -> |40| ->NULL
//
//  Output : Addition of element is : 100
//
///////////////////////////////////////////////////////////////////////////////
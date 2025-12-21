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
//  Function Name : Maximum
//  Description :   return maximum number
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int Maximum(PNODE first)
{
    int iMax = 0;
    iMax = first->data;
    PNODE iTemp = first ;
    while(first != NULL)
    {
        if(first->data > iMax)
        {
            iMax = first->data;
        }
        first = first->next;
    }
    return iMax;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0 ;

    InsertFirst(&head ,240);
    InsertFirst(&head,320);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head);
    iRet = Maximum(head);

    printf("Maximum element is : %d", iRet);

    return 0 ;

}

///////////////////////////////////////////////////////////////////////////////
//
//    Input linked list : |110| -> |230| -> |320| -> |240| ->NULL
//   
//    Output : Maximum element is : 320  
//
///////////////////////////////////////////////////////////////////////////////
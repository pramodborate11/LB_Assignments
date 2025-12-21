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
//  Function Name : FirstOccurance
//  Description :   Display the first occurance of number
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int FirstOccurance(PNODE first,int no)
{
    int iCnt = 0;
    int icount = 0;
    icount = 1;

    printf("Output: ");
    while(first != NULL)
    {
        if(first->data == no)
        {
            return icount;
        }
        first = first->next;
        icount++;
    }
    return icount ; 
    
    
}

int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head ,89);
    InsertFirst(&head,6);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

    Display(head);
    iret = FirstOccurance(head,41);
    printf("First occured at : %d\n",iret);

    return 0 ;

}

///////////////////////////////////////////////////////////////////////////////
//
//  Input linked list : |11| -> |28| -> |17| -> |41| -> |6| -> |89| ->NULL
//
//  Output: First occured at : 4
//
///////////////////////////////////////////////////////////////////////////////
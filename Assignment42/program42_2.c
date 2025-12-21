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
//  Function Name : LastOccurance
//  Description :   Display the last occurance of number 
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int LastOccurance(PNODE first,int no)
{
    int iCnt = 0;
    int icount = 0;
    int ilast = 0;
    icount = 1;
    ilast = -1;

    printf("Output: ");
    while(first != NULL)
    {
        if(first->data == no)
        {
            ilast  = icount;
        }
        first = first->next;
        icount++;
    }
    return ilast ; 
    
    
}

int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head ,89);
    InsertFirst(&head,6);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,41);
    InsertFirst(&head,11);

    Display(head);
    iret = LastOccurance(head,41);
    printf("Last Occured at : %d\n",iret);

    return 0 ;

}

///////////////////////////////////////////////////////////////////////////////
//
//  Input linked list : |11| -> |41| -> |89| -> |41| -> |6| -> |89| ->NULL
//
//  Output: Last Occured at : 4
//
///////////////////////////////////////////////////////////////////////////////
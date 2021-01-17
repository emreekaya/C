/* Operating and maintaining a Linked List 
  (with file saving capability)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

//---------------------------------------------------------
// self-referential structure 
struct Node 
{
  int  data;
  struct Node *nextPtr;  // pointer to next node 
};

typedef struct Node ListNode; // synonym for struct Node 
typedef ListNode *ListNodePtr;  // synonym for ListNode*

//---------------------------------------------------------
// Function prototypes 

void insert( ListNodePtr *sPtr, int value );
int delete( ListNodePtr *sPtr, int value );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void dumpList( ListNodePtr currentPtr );
void instructions( void );
void dosyadan_oku(ListNodePtr *sPtr);
void dosyaya_yaz(ListNodePtr currentPtr);

//---------------------------------------------------------
int main()
{ 
   ListNodePtr startPtr = NULL;     // initially there are no nodes 
   int choice; // user's choice 
   int data;  // data entered by user 
   int modified_flag = FALSE;  // Dosyadan okunan listede degisim tesbiti icin.
   char cevap;  // Dosyaya kaydetmek icin kullanici cevabi

   printf( "LINKED LIST PROGRAM EXAMPLE\n" );
   dosyadan_oku(&startPtr);
   printList( startPtr );

   instructions(); // display the menu
   scanf( "%d", &choice );

// loop while user does not choose exit 
   while ( choice != 4 ) { 

      switch ( choice ) { 

         case 1:
            printf( "Enter a number as data: " );
            scanf("%d", &data );
            insert( &startPtr, data );           // insert new data in list 
            modified_flag = TRUE;
            printList( startPtr );
            break;

case 2:
            // if list is not empty
            if ( !isEmpty( startPtr ) ) { 
               printf( "\nEnter data value to be deleted: " );
               scanf("%d", &data );
               // if name is found, remove it 
               if ( delete( &startPtr, data ) ) {                // removed data's node
                  printf( "%d deleted.\n", data );
                  modified_flag = TRUE;
                  printList( startPtr );
               } // end if
               else 
                  printf( "\n%d not found.\n\n", data );
            } // end if
            else 
               printf( "\nList is empty.\n\n" );
            break;

case 3:
            printList( startPtr );
            break;

         default:
            printf( "\nInvalid choice.\n\n" );
            break;
      
      } // end switch

      instructions(); // display the menu
      scanf( "%d", &choice );
   } // end while

 printf( "End of run.\n" );
 if (modified_flag == TRUE)
 {
      printf("Listede degisim tespit edildi.\n           Dosyaya kaydetmek istermisiniz (E/H) ? ");
      fflush(stdin); //clear keyboard buffer
      cevap = getchar();
      if (cevap == 'e' || cevap == 'E')
         dosyaya_yaz(startPtr);
 }
 dumpList(startPtr);
 printf("\n");
 system("pause");
 return 0; // indicates successful termination

} // end main


//---------------------------------------------------------
/* display program instructions to user */
void instructions( void )
{ 
   printf( "MAIN MENU \n"
      "   1) Insert an element into the list\n"
      "   2) Delete an element from the list\n"
      "   3) Print the list\n"
      "   4) Exit\n Enter your choice: " );
}


//---------------------------------------------------------
/* Insert a new value into the list in sorted order */
void insert( ListNodePtr *sPtr, int value )
{ 
   ListNodePtr newPtr;      // pointer to new node 
   ListNodePtr previousPtr; // pointer to previous node
   ListNodePtr currentPtr;  // pointer to current node

   newPtr = malloc( sizeof( ListNode ) ); // create node 

   if ( newPtr != NULL ) { // is space available 
      newPtr->data = value; // place value in node 
      newPtr->nextPtr = NULL;               // node does not link to another node 

      previousPtr = NULL;
      currentPtr = *sPtr;

/* loop to find the correct location in the list */
      while ( currentPtr != NULL && value > currentPtr->data ) { 
         previousPtr = currentPtr;        /* walk to ...   */
         currentPtr = currentPtr->nextPtr; /* ... next node */
      } // end while

      /* insert new node at beginning of list */
      if ( previousPtr == NULL ) { 
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;      // Starting node of list has been changed!
      } // end if 


else { 
/* insert new node between previousPtr and currentPtr */
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      } // end else 
   
   } // end if 
   else {
      printf( "%s not inserted. No memory available.\n",          value );
   } // end else 

} /* end function insert */


//---------------------------------------------------------
/* Delete a list element */
int delete( ListNodePtr *sPtr, int value )
{ 
  ListNodePtr previousPtr; // pointer to previous node
  ListNodePtr currentPtr; //pointer to current node       ListNodePtr tempPtr;    // temporary node pointer 
  ListNodePtr tempPtr;

   /* delete first node if matches the value */
   if ( value == ( *sPtr )->data ) { 
      tempPtr = *sPtr; // hold onto node being removed 
      *sPtr = ( *sPtr )->nextPtr; // de-thread the node 
      // Starting node of list has been changed!
      free( tempPtr ); // free the de-threaded node
      return value;
   } // end if 


else { 
      previousPtr = *sPtr;
      currentPtr = ( *sPtr )->nextPtr;

      /* loop to find the correct location in the list */
      while ( currentPtr != NULL &&            currentPtr->data != value  ) 
      { 
         previousPtr = currentPtr;         /* walk to ...   */
         currentPtr = currentPtr->nextPtr; /* ... next node */  
      } // end while 


 /* delete node at currentPtr */
      if ( currentPtr != NULL ) { 
         tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free( tempPtr );
         return TRUE;
      } // end if 
     
   } // end else 

   return FALSE;

} // end function delete 


//---------------------------------------------------------
/* Return 1 if the list is empty,  0 otherwise */
int isEmpty( ListNodePtr sPtr )
{ 
 if (sPtr == NULL)
       return TRUE;
   else
      return FALSE;

} 

//---------------------------------------------------------
/* Print data items in the list */
void printList( ListNodePtr currentPtr )
{  // if list is empty
   if ( currentPtr == NULL ) {
      printf( "List is empty.\n" );
   }
   else { 
      printf( "The list is:\n" );
      // while not the end of the list 
      while ( currentPtr != NULL ) { 
         printf( "%d --> ", currentPtr->data );
         currentPtr = currentPtr->nextPtr;   
      } // end while
      printf( "NULL\n" );
   }
} 


//---------------------------------------------------------
void dosyadan_oku(ListNodePtr *sPtr)
{
  FILE *fPtr;
  int data;  // data value read from file
  
  fPtr = fopen("veriler.txt","r");

  if (fPtr == NULL)
  {
     printf("veriler.txt dosyasi bulunamadi.\n");
     return;
  }   
  printf("veriler.txt dosyasi bulundu.\n");

  // Read first record
  fscanf(fPtr, "%d", &data); 

  while(!feof(fPtr))
  {
     insert( sPtr, data ); // insert data in list 
     fscanf(fPtr, "%d", &data); // Read next record
  }                 
  
  fclose(fPtr);
} // end of dosyadan_oku


//---------------------------------------------------------
void dosyaya_yaz(ListNodePtr currentPtr)
{
  FILE *fPtr;
  fPtr = fopen("veriler.txt","w");
  if (fPtr == NULL) {
     printf("veriler.txt dosyasi olusturulamadi.\n");
     return;
  }
  // while not the end of the list 
  while ( currentPtr != NULL ) { 
    fprintf(fPtr, "%d\n", currentPtr->data); 
    currentPtr = currentPtr->nextPtr;   
  } // end while 
     
  fclose(fPtr);
} // end of dosyaya_yaz

//---------------------------------------------------------
/* Same as printList */
void dumpList( ListNodePtr currentPtr ) { 
   // if list is empty
   if ( currentPtr == NULL ) {
      printf( "List is empty. \n" );
   }
   else { 
      printf( "\nDUMP OF LINKED LIST\n" );
      printf( "startPtr = %x\n", currentPtr );
      printf( "----------------------------\n");
      printf( "| Address | Data | NextPtr |\n");
      /* while not the end of the list */
      while ( currentPtr != NULL ) { 
         printf( "----------------------------\n");
         printf( "| %6x  |%4d  | %6x  |\n", currentPtr, 
         currentPtr->data, currentPtr->nextPtr );
         currentPtr = currentPtr->nextPtr;   
      }
      printf( "----------------------------\n");
   } // end else 
}








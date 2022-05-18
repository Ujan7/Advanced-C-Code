#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int list_elem;
typedef struct node *list;

//CONSTRUCTOR OF ATD LIST:
list empty_list(void);
/* 
  CREATES A LIST WITH 0 ELEMENTS
*/
list addl(list_elem x, list l);
/* 
  ADDS AN ELEMENT AT THE BEGGINING 
*/
list destroy(list l);
/* 
  FREES SPACE IN MEMORY
*/
//FUNCTIONS OF ATD LIST:
list addr(list_elem x,list l);
/* 
  ADDS AN ELEMENT AT THE END OF THE ACTUAL LIST
*/
bool is_empty (list l);
/* 
  GIVES BACK TRUE IF THE LIST IS EMPTY
*/
list_elem head (list l);
/* 
  GIVES BACK THE FIRST ELEMENT OF THE LIST
  PRE: !is_empty
*/
list tail (list l);
/* 
  GIVES BACK THE ELEMENTS OF THE LIST DROPING THE FIRST ELEMENT
  PRE: !is_empty
*/
unsigned int length (list l);
/* 
  GIVES BACK THE QUANTITY OF ELEMENTS IN THE ACTUAL LIST
*/
list concat(list l,list l1);
/* 
  IN ORDER TO RETURN A NEW LIST THAT IS THE UNION OF BOTH LISTS PASSED AS PARAMETRER
*/
list_elem indexL(list l,unsigned int x);
/* 
  GIVES BACK THE ELEMENT OF THE POSITION PASSED AS PARAMETRER
  PRE: Length > x
*/
list take(list l,unsigned int x);
/* 
  GIVES BACK A LIST WITH THE X'S ELEMENTS
  PRE: Length > x
*/
list drop(list l,unsigned int x);
/* 
  ELIMINATES THE X'S ELEMENTS OF THE LIST
  PRE: Length > x
*/
list copy_list(list l);
/* 
  COPIES ALL THE ELEMENTS OF L BY CREATING A NEW LIST WITH THOSE ONES
*/






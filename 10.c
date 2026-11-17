#include <stdio.h>

#define MAX 500.

Char stack [MAX];

int top = -1;

Void type Character (char ch)
{

if(top == MAX-1){

printf(" Stack overflow \n");

} else {

Stack [++top]=ch;
}
}

void undo ()
{

if (top ==-1){

printf ("Nothing to undo! \n");
}


else {

top--;
}
}

yoid duplay ()
{
int i;

printf ("Current Text: ");

for (i=0; i<=top; i++){

printf ("%C", Stack [i]);
}

print ("\n");
}

int main ()
{
int choice;

Char Ch;

 while (1)
{

printf ("\n 1. Type Character");

printf (" \n 2. undo");

printf ("\n 3. display Text");

printf (" \n u. Exit");

printt (" \n Enter your choice!");

Swith  (Choice)
{
Case 1:

printf("Enter Character: ");

Scanf ("%c",&ch);

type Character (ch);

display ();

break;

Case 2:

undo ()

display();

break;

Case 3:

display ();

break;

case 4:

return 0;

default:

printf(" Invalid choice in");
}
}

return 0;
}
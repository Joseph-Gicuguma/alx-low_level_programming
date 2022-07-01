#include <stdio.h>
#include <ctype.h>
main()
{
    char alphabets;
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
 
  if (islower(alphabets))
     putchar(toupper(alphabets)); //change to uppercase
     putchar('\n');
  else
     putchar(tolower(alphabets)); //else change to lowercase
     putchar('\n');
return (0);
}

#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[]) {
 
int i=0;
char Last;
char Alphabet[27] = {{97},{98},{99},{100},{101},{102},{103},{104},{105},{106},{107},{108},{109},{110},{111},{112},{113},{114},{115},{116},{117},{118},{119},{120},{121},{122}};
scanf("%c", &Last);
 
do {
 
printf("%c ", Alphabet[i]);
i++;
 
} while(Alphabet[i]<=Last);
 
return 0;
}
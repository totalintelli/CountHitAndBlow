//CountHitAndBlow.c
#include <stdio.h>
#define MAX 4	
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(ULong (*answers), ULong (*numbers));
void CountHitAndBlow(ULong (*answers), ULong (*numbers), ULong (*hit), ULong (*blow));
void Output(ULong hit, ULong blow);

//program to check if the given letter is vowel or consonant using switch case//
#include<stdio.h>
void main()
{
    char c;
    printf("enter a letter:\n");
    scanf("%c",&c);
    switch(c)
    {
      case 'a': 
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U': printf("%c is a vowel ",c);
              break;
       default: printf(" %c is a consonant\n",c);
    
    }



}
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if(isdigit(ch)){
        printf("Digit\n");
    }
     if(low=='a'|| low=='e' || low=='i' || low=='o' || low=='u')
    {
        printf("Vowel");
    }
     else{ 
        printf("Consonant");
     }
     }
   
    else
    {
        printf("Special Character");
    }
    return 0;


}
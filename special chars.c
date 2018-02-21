#include <stdio.h>
int main()
{
    char str[100];
    int countSpecialChar,count spaces;
    int counter;
    countSpecialChar=countSpaces=0;
    printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
         if (str[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
    printf("\nSpaces: %d \nSpecial Characters: %d",countSpaces,countSpecialChar);
    return 0;
}

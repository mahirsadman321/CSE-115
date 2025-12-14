#include<stdio.h>
#include<string.h>

int countConsonats(char str[]);
int main(void)
{
    char *str[100];
    printf("Sample Input: ");
    gets(str);

   int c = countConsonats(str[100]);

   printf("Consonant count: %d", c);


    return 0;
}


int countConsonats(char str[100])
{
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]!='a'|| str[i]!='A'||
           str[i]!='e'|| str[i]!='E'||
           str[i]!='i'|| str[i]!='I'||
           str[i]!='o'|| str[i]!='O'||
           str[i]!='u'|| str[i]!='U');
           count++;
    }
    return count;
}

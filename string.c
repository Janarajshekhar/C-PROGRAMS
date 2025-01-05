#include<stdio.h>
#include<string.h>
void strcat_function();
void strlen_function();
void strcmp_function();
void strcpy_function();
int main()
{
    strcat_function();
    strlen_function();
    strcmp_function();
    strcpy_function();
    return 0;
}
void strcat_function()
{
    char dest[50]="This is an";
    char stc[50]=" example";
    printf("\n dest befour : %s",dest);
    strcat(dest,stc);
    printf("\n dest after : %s",dest);
}
void strlen_function()
{
    char str[]="Midnapore College";
    int length;
    length=strlen(str);
    printf("\n string : %s",str);
    printf("\n length : %d",length);
}
void strcmp_function()
{
    char str1[]="Hello";
    char str2[]="World";
    char str3[]="Hello";
    int result_1,result_2,result_3;
    result_1=strcmp(str1,str2);
    result_2=strcmp(str2,str3);
    result_3=strcmp(str1,str3);
    /*
       -1  :- str1 cames before str2 in dictianary
        1  :- str2 cames after str3 in dictianary
        0  :- str1 and str 3 is same
    */
    printf("\n comperation of str1 and str2 : %d",result_1);
    printf("\n comperation of str2 and str3 : %d",result_2);
    printf("\n comperation of str1 and str3 : %d",result_3);
}
void strcpy_function()
{
    char source[]="Midnapore College";
    char dest[20];
    strcpy(dest,source);
    printf("\n source : %s",source);
    printf("\n Destination : %s",dest);
}
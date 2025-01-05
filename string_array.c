#include<stdio.h>
#include<string.h>
void find_the_revers_of_string();
void check_a_string_is_palindrom_or_not();
int main()
{
    // find_the_revers_of_string();
    check_a_string_is_palindrom_or_not();
    return 0;
}
void find_the_revers_of_string()
{
    int i,j,len;
    char str_1[40],str_2[40];
    printf("Enter a string: ");
    fgets(str_1,40,stdin);
    len=strlen(str_1);
    if (str_1[len - 1] == '\n') {
        str_1[len - 1] = '\0';
        len--;
    }
    for (i = 0, j = len - 1; j >= 0; i++, j--){
    str_2[i]=str_1[j];
    }
    str_2[i]='\0';
    printf("\n original string : %s",str_1);
    printf("\n reverse string : %s",str_2);
}
void check_a_string_is_palindrom_or_not()
{
    int i,j,len;
    char str_1[40],str_2[40];
    printf("Enter a string: ");
    fgets(str_1,40,stdin);
    len=strlen(str_1);
    if (str_1[len - 1] == '\n') {
        str_1[len - 1] = '\0';
        len--;
    }
    for (i = 0, j = len - 1; j >= 0; i++, j--){
    str_2[i]=str_1[j];
    }
    str_2[i]='\0';
    printf("\n original string : %s",str_1);
    printf("\n reverse string : %s",str_2);
    if(strcmp(str_1,str_2)==0)
    {
        printf("\n string is palindrom");
    }
    else
    {
        printf("\n string is not palindrom");
    }
}
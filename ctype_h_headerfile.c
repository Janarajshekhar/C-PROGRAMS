#include<stdio.h>
#include<ctype.h>
void isalnum_function();
void isalpha_function();
void isascii_function();
void isdigit_function();
void islower_function();
void isupper_function();
void ispunct_function();
void ispace_function();
void toascii_function();
void tolower_function();
void toupper_function();
void check_character_is_alphabate_digit_simbol_space();
void check_a_alphabate_character_is_vowel_or_consonant();
int main()
{
    isalnum_function();
    isalpha_function();
    isascii_function();
    isdigit_function();
    islower_function();
    isupper_function();
    ispunct_function();
    ispace_function();
    toascii_function();
    tolower_function();
    toupper_function();
    check_character_is_alphabate_digit_simbol_space();
    check_a_alphabate_character_is_vowel_or_consonant();
    return 0;
}
void isalnum_function()
{
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    if(isalnum(ch))
    printf("\n %c is a alphanumeric value",ch);
    else
    printf("\n %c is not a alphanumeric value",ch);
}
void isalpha_function()
{
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    if(isalpha(ch))
    printf("\n %c is a alphabate",ch);
    else
    printf("\n %c is not a alphabate",ch);
}
void isascii_function()
{
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    if(isascii(ch))
    printf("\n %c is a valid ASCII character",ch);
    else
    printf("\n %c is not a valid ASCII character",ch);
}
void isdigit_function()
{
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    if(isdigit(ch))
    printf("\n %c is a digit",ch);
    else
    printf("\n %c is not a digit",ch);
}
void islower_function()
{
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    if(islower(ch))
    printf("\n %c is a lowercase letter",ch);
    else
    printf("\n %c is not a lowercase letter",ch);
}
void isupper_function()
{
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    if(isupper(ch))
    printf("\n %c is a uppercase letter",ch);
    else
    printf("\n %c is not a uppercase letter",ch);
}
void ispunct_function()
{
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    if(ispunct(ch))
    printf("\n %c is a punctuation character",ch);
    else
    printf("\n %c is not a punctuation character",ch);
}
void ispace_function()
{
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    if(isspace(ch))
    printf("\n %c is a white space",ch);
    else
    printf("\n %c is not a white space",ch);
}
void toascii_function()
{
    int ASCII_value;
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    ASCII_value=(toascii(ch));
    printf("\n original character is %c",ch);
    printf("\n ASCII value is %d",ASCII_value);
}
void tolower_function()
{
    char ch,lower;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    lower=(tolower(ch));
    printf("\n original character is %c",ch);
    printf("\n before this character is %c",lower);
}
void toupper_function()
{
    char ch,upper;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    upper=(toupper(ch));
    printf("\n original character is %c",ch);
    printf("\n before this character is %c",upper);
}
void check_character_is_alphabate_digit_simbol_space()
{
    char ch;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    if(isalpha(ch))
    printf("\n %c is a alphabate",ch);
    else if(isdigit(ch))
    printf("\n %c is a digit",ch);
    else if(ispunct(ch))
    printf("\n %c is a punctuation",ch);
    else if(isspace(ch))
    printf("\n %c is a white space",ch);
    else
    printf("\n %c is a spesial character",ch);
}
void check_a_alphabate_character_is_vowel_or_consonant()
{
    char ch,k;
    printf("\n enter a character : ");
    scanf("%c",&ch);
    k=ch;
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("\n %c is vowel",k);
    else
    printf("\n %c is consonant",k);
}
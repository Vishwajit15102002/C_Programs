 // Finding Vowel or consonant.
#include<stdio.h>
#include<conio.h>

int main()
{
char c;
printf(" Enter any one alphabet : ");
scanf("%c",&c);
if( c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
    printf(" %c is an Vowel ",c);

}
else{
    printf(" %c is a consonant ",c);
}
return 0;
}
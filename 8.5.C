#include<conio.h>
#include<string.h>
#include<cstdio>

int main()
{
  char line[100];
  int vowels,consonants,digit,space,i;
  vowels=consonants=digit=space=0;
  printf(" Enter Your full name and your age with this format : ");
  cgets(line,stdin);
  for(i=0;line[i]!='\0';i++)
  {
      if(line[i]=='a'|| line[i]=='e'|| line[i]=='i'|| line[i]=='o'|| line[i]=='u'|| line[i]=='A'|| line[i]=='E'|| line[i]=='I'|| line[i]=='O'|| line[i]=='U')
      {
          ++vowels;
      }
      else if((line[i]>='a' && line[i]<='z')|| (line[i]>='A' && line[i]<='Z'))
      {
          ++consonants;
      }
      else if(line[i]>='0' && line[i]<='9')
      {
          ++digit;
      }
      else if(line[i]==' ')
      {
          ++space;
      }
  }
  printf("Vowels = %d times ",vowels);
  printf("consonants = %d times ",consonants);
  printf("digit = %d times ",digit);
  printf("spaces = %d times ",space);
  return 0;
}
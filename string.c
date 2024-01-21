#include <stdio.h>
#include<string.h>

int main()
{
  char s1[20];
  char s2[30];
  printf("Type Your Strings\n");
  gets(s1);
  gets(s2);
  printf("length of string is %d\n",strlen(s1));
  printf("concatenation of two strings %s\n",strcat(s1,s2));
  printf("lowercase of string %s\n",strlwr(s1));
  printf("Upercase of string %s\n",strupr(s1));
  printf("Compare of stings %ld\n",strcmp(s1,s2));
  printf("Copy of String %s\n",strcpy(s1,s2));
  return 0;
}

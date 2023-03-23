#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
 	gets(str);
    char *p = str;
    printf("Length of the string: %d\n", strlen(p));

    return 0;
}

//int main() {
//  char str[100], *p;
//  int len = 0;
//  printf("Enter a string: ");
//  gets(str);
//  p = str;
//  while (*p != '\0') {
//    len++;
//    p++;
//  }
//  printf("The length of the string is: %d\n", len);
//
//  return 0;
//}

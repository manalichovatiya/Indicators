#include<stdio.h>
#include<string.h>

int main() {
  int arr[100], n, i, *p;

  printf("Enter the number of elements : ");
  scanf("%d", &n);

  printf("Enter elements :\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Your entered elements :\n");
  for (p = arr; p < arr + n; p++) {
    printf("%d\n", *p);
  }

  return 0;
}

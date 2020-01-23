#include <stdio.h>

int main()
{
  int n, array[1000], i, d, temp;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 1 ; i <= i - 1; i++) {
    d = i;

    while ( d > 0 && array[d] < array[d-1]) {
      temp= array[d];
      array[d]= array[d-1];
      array[d-1]=temp;
      d--;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}

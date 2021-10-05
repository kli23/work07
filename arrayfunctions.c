#include <stdio.h>
#include <stdlib.h>

int printarray(int arr[], int arraysize) {
  int i;
  printf("[ ");
  for (i = 0; i < arraysize; i++)
    printf("%d ", arr[i]);
  printf("]\n");
  return 0;
}

int arrayavg(int *arr, int arraysize) { //better parameter format
  int sum = 0;
  int i;
  for (i = 0; i < arraysize; i++) {
    sum += *arr;
    arr++;
  }
  return sum / arraysize;
}

int arraycopy(int *arr, int *arr2, int arraysize) {
  int i;
  for (i = 0; i < arraysize; i++)
    *(arr2 + i) = *(arr + i);
  return 0;
}

int main() { // test runs to make sure functions work
  int input[5] = {1, 2, 3, 4, 5};
  printarray(input, 5);
  printf("%d\n", arrayavg(input,5));
  int copy[5] = {1, 1, 1, 1, 1};
  printarray(copy,5);
  arraycopy(input, copy, 5);
  printarray(copy,5);
  return 0;
}

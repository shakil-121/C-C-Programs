#include <stdio.h>

void selection_sort(int* array, int size) {
  for (int i = 0; i < size; i++) {
    int min_index = i;
    for (int j = i + 1; j < size; j++) {
      if (array[j] < array[min_index]) {
        min_index = j;
      }
    }
    int temp = array[i];
    array[i] = array[min_index];
    array[min_index] = temp;
  }
}

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int array[size];

  printf("Enter %d integers:\n", size);
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  selection_sort(array, size);

  printf("Sorted list:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}

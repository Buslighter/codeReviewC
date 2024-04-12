#include <stdio.h>
#include <stdlib.h>

int fillMatrix(int** matrix, int size) {
  int ans = 0;
  for (int i = 0; i < size; i++) {
    matrix[i] = (int*)malloc(size * sizeof(int));
    for (int j = 0; j < size; j++) {
      if (scanf("%d", &matrix[i][j]) != 1) {
        ans = 1;
        break;
      }
    }
  }
  if (ans) {
    for (int i = 0; i < size; i++) {
      free(matrix[i]);
    }
    free(matrix);
  }
  return ans;
}
void freeMatrix(int** matrix, int size) {
  for (int i = 0; i < size; i++) {
    free(matrix[i]);
  }
  free(matrix);
}

int main() {
  int n;
  int ans = 0;
  if (scanf("%d\n", &n) != 1) {
    ans = 1;
  }
  if (ans != 1) {
    int** A = (int**)malloc(n * sizeof(int*));
    int** B = (int**)malloc(n * sizeof(int*));
    int** result = (int**)malloc(n * sizeof(int*));
    ans = fillMatrix(A, n);
    ans = fillMatrix(B, n);
    if (ans != 1) {
      for (int i = 0; i < n; i++) {
        result[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
          int sum = 0;
          for (int k = 0; k < n; k++) {
            sum += A[i][k] * B[k][j];
          }
          result[i][j] = sum;
        }
      }
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          printf("%d ", result[i][j]);
        }
        printf("\n");
      }
      freeMatrix(result, n);
      freeMatrix(A, n);
      freeMatrix(B, n);
    } else {
      printf("n/a");
    }
  } else
    printf("n/a");
  return ans;
}
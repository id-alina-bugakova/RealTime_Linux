// ----------------------------------------------------------------
// ИМЯ: Бугакова Алина 
// ID ПОЛЬЗОВАТЕЛЯ: 23К0104
// СРОК: 23.09.25
// ИМЯ ФАЙЛА: prog_arrays.c
// НАЗНАЧЕНИЕ ПРОГРАММЫ:
// Вывод адресов элементов массивов (одномерного и двумерного)
// ----------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void array_addresses ()
{
  int n = 0;
  printf("Input the size of the arrays: ");
  scanf("%d", &n);
  int * lnarr = (int*)calloc(n, sizeof(int));
  int ** sqarr = (int**)calloc(n, sizeof(int*));
  for(int i = 0; i < n; ++i)
    sqarr[i] = (int*)calloc(n, sizeof(int));
  printf("Line array addresses:\n");
  for(int i = 0; i < n; ++i)
    printf("%p ", (void*)&lnarr[i]);
  printf("\nSquare array addresses:\n");
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j)
      printf("%p ", (void*)&sqarr[i][j]);
    printf("\n");
  }
  free(lnarr);
  for(int i = 0; i < n; ++i)
    free(sqarr[i]);
  free(sqarr);
}

int main() 
{
  array_addresses();
  return 0;
}

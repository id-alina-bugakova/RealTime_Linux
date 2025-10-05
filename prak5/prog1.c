// ----------------------------------------------------------------
// ИМЯ: Бугакова Алина 
// ID ПОЛЬЗОВАТЕЛЯ: 23К0104
// СРОК: 23.09.25
// ИМЯ ФАЙЛА: prog1.c
// НАЗНАЧЕНИЕ ПРОГРАММЫ:
// Вычисление минимума, максимума и среднего значения в массиве
// ----------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// ----------------------------------------------------------------
// ФУНКЦИЯ поиска минимума, максимума и среденго: min_max_mean
// Находит минимум, максимум и среднее в массиве
// ИСПОЛЬЗОВАНИЕ ПАРАМЕТРА: 
//   float* arr - массив, в котором производится поиск
//   size_t len - длина массива
//   float* min - переменная, в которую будет записано минимальное
//     значение в массиве
//   float* max - переменная, в которую будет записано максимальное
//     значение в массиве
//   float* mean - переменная, в которую будет записано среднее
//     арифметическое значений в массиве
// ВЫЗЫВАЕМАЯ ФУНКЦИЯ: нет
// ----------------------------------------------------------------
void min_max_mean (float* arr, size_t len, float* min, float* max, float* mean)
{
  *min = 1e30F;
  *max = -1e30F;
  *mean = 0;
  for (int i = 0; i < len; i += 1) 
  {
    *min = arr[i] < (*min)? arr[i] : (*min);
    *max = arr[i] > (*max)? arr[i] : (*max);
    *mean += arr[i];
  }
  *mean /= len;
  return;
}

int main() 
{
  size_t n;
  printf("Input the length of the array: ");
  scanf("%zu", &n);
  float* arr = malloc(sizeof(float) * n);
  printf("Input the array:\n");
  for (int i = 0; i < n; i += 1) 
    scanf("%f", &arr[i]);
  float min, max, mean;
  min_max_mean(arr, n, &min, &max, &mean);
  printf("Min value: %.2f\nMax value: %.2f\nMean: %.2f\n", min, max, mean);
  return 0;
}

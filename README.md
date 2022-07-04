# stepik8.2_palindrom

Палиндром 
Определить является ли массив палиндромом, т.е. первый элемент равен последнему, второй предпоследнему и т.д.

Входные данные:
Первая строка число 
N
,
(
N
>
0
)
N,(N>0) -- длина массива. Длина массива не более 100 элементов. Вторая строка 
N
N  целых чисел, записанных через пробел

Выходные данные: 
YES -- если массив является палиндромом, NO -- в противном случае.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  int n, array[100] = {0};
  scanf("%d", &n);
   
  // ввод данных  
  for (int i = 0; i < n; i++) {
      scanf("%d", &array[i]);
  }
  // проверка массива
  int palindrom = 1;  //true
  for (int i = 0; i < n; i++) {      
      if (array[i] != array[n - i - 1]) {
          palindrom = 0; //false
          break;
      }
  }  
  printf(palindrom ? "YES" : "NO");
  return 0;
}

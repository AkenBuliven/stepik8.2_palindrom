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
#include <stdio.h>

int main() {
    int a = 5, b = 5;
    int x = ++a; 
    int y = b++; 
    int p = --a; 
    int q = b--; 
    printf("x=%d, y=%d, p=%d, q=%d", x, y, p, q); 
  return 0;
}    

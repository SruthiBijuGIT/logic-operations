#include <stdio.h>

int main(void) {
  int x,y;
  printf("Enter x (0 or 1) : ");
  scanf("%d",&x);
  printf("Enter y (0 or 1) : ");
  scanf("%d",&y);
  printf("x and not y : %d\n",x&&!y);
  printf("not x and y : %d\n", !x && y);
  printf("not x and not y : %d\n",!x && !y);
  printf("x or not y : %d\n",x||!y);
  printf("not x or y : %d\n",!x||y);
  printf("not x or not y : %d\n",!x||!y);
}

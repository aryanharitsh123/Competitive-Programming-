#include <stdio.h>
 
int main(void) {
 
  long a,b,c,k,count = 0;
  scanf("%ld %ld %ld %ld", &a, &b, &c, &k);
  while (b <= a) {
    count++;
    b *= 2;
  }
  while (c <= b) {
    count++;
    c *= 2;
  }
  if (count <= k) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
 
  return 0;
}

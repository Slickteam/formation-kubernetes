#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 

int main()
{
  int i = 0;
  while(i < 300000)
  {
    printf("malloc %p\n", malloc(1024*1024));
    sleep(0.10);
    i += 1;
  }
  return 0;
}

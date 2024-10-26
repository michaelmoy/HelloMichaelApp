#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "HelloMichael.h"

int main(int argc, char *argv[]) {
  printf("*************************************************\n");
  printf("*\n");
  printf("* MoySys Yocto CLI Application\n");
  printf("*\n");
  printf("* Hello Michael\n");
  printf("*\n");
  printf("* Rev: %d.%d\n", HELLO_MICHAEL_REV_MAJOR, HELLO_MICHAEL_REV_MINOR );
  printf("* Build: %s %s\n", __DATE__, __TIME__);
  printf("*\n");
  printf("*************************************************\n");

  printf("Hello Michael!!!\n");

  printf("\n\nDone\n");

  return 0;
}


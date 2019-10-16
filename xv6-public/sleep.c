#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
  if(argc != 2){
    printf(2, "usage: sleep time...\n");
    exit();
  }
  int time = atoi(argv[1]);
  printf(2, "sleeping %d seconds...\n", time);
  sleep(time*100);
  exit();
}
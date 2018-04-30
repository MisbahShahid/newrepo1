#include<sys/syscall.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
  printf("Thread id %Id \n ",syscall(SYS_gettid));
  /*could also pass __NR_gettid */
  return 0;
}
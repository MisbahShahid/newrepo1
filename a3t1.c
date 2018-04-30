#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
  printf("Process id %Id \n ",syscall(SYS_getpid));
  printf("Parent process id %Id \n ",syscall(SYS_getppid));
  printf("Group id %Id \n ",syscall(SYS_getgid));
  printf("User id %Id \n ",syscall(SYS_getuid));
  printf("process group id %Id \n ",syscall(SYS_getpgid));

  
  return 0;
}
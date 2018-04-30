#include<stdio.h>
#include<unistd.h>
int main()

{

printf("Pid: %d \n",getpid());
printf("userid: %d \n",getuid());
printf("groupid: %d \n",getgid());

}
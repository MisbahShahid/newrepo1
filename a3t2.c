#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>

int main (int argc,char *argv[ ]) 
{ 
FILE *fp;

fp=fopen("write.txt","w");      
if(fp==NULL)
{
printf("empty %d /n");
return 0;
}
printf("process id :%d\n",getpid());
fprintf(fp,"Process id is: %d\n",getpid());  
printf("Path: %d \n",getenv("PATH"));
fprintf(fp,"path is =%d\n",getenv("PATH"));
printf("Thread id: %d\n", syscall(SYS_gettid));
fprintf(fp,"Thread id is :%d\n", syscall(SYS_gettid));
fclose(fp);
return 0;  
   
}          
           
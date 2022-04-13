#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/utsname.h>
int main(){

printf("\n\n\tSystem info\n\n");
struct utsname var;
uname(&var);
printf("System Name = %s\n", var.sysname);
printf("Node Name = %s\n", var.nodename);
printf("Version = %s\n", var.version);
printf("Release = %s\n", var.release);
printf("Machine = %s\n", var.machine);


printf("\n\n\tHardware Configuration using lscpu\n\n");
int ret=system("lscpu");

return 0;
}

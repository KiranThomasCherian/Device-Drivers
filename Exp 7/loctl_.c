#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include<sys/ioctl.h>
 
#define WR_VALUE _IOW('a','a',int32_t*)
#define RD_VALUE _IOR('a','b',int32_t*)
 
int main()
{
        int des;
        int32_t val,num;
 
        printf("\nOpening kiranchardev Driver\n");
        des = open("/dev/kiranchardev-0", O_RDWR);
        if(des < 0) {
                printf("Cannot open device file!!!\n");
                return 0;
        }
 
        printf("Enter the number to send\n");
        scanf("%d",&num);
        printf("Writing input to Driver\n");
        ioctl(des, WR_VALUE, (int32_t*) &num); 
 
        printf("Reading number from Driver\n");
        ioctl(des, RD_VALUE, (int32_t*) &val);
        printf("Number is %d\n", val);
 
        printf("Closing Driver\n");
        close(des);
}

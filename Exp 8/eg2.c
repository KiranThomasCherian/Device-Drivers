//Writing to read-only memory raising a segmentation fault
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *s = "My Segmentation Fault Code";
    *s = 'E';
	return 0;
}

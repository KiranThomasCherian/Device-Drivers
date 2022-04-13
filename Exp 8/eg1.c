//Infinite recursions which causes the stack to overflow which results in a segmentation fault
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    return main();
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include "test1.h"
sysStatus ssysStatus;
void Invert1(int x, int y);
void Invert2(int* x, int* y);
char* GetMemory(void);


int main(void)
{  
    static uint32_t sizeInfo = 0;
    sizeInfo = sizeof(ssysStatus);
    printf("%d" , sizeInfo);
    return 1;
}

char* GetMemory(void)
{
    char p[] = "hello world";
    return p;
}


void Invert1(int x,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void Invert2(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

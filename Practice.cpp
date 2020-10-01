#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header1.h"
int main()
{
    int a,b=0;
    printf("N=");
    scanf("%d", &a); 
    a++;
    for (int i = 1; i <= a; i++) {
        printf("\n%i) %d ",b, fbciseries(i));
        b++;
    }
    
    return 0;
}
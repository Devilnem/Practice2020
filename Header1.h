#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fbciseries(int a)
{
    if (a == 1 || a == 2)
        return 1;
    return fbciseries(a - 1) + fbciseries(a - 2);
}
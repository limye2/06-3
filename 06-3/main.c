//
//  main.c
//  06-3
//
//  Created by MacBook Air on 2023/10/12.
//

#include <stdio.h>

int sumTwo(int a, int b)
{
    int c = a+b;
    return (a+b);
}

int square(int n)
{
    return n*n;
}

int get_max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
    
}
int main(int argc, char *argv[])
{
    int a,b;
    
    a = 3;
    b = 10;
    printf("sumTwo result : %i\n", sumTwo(a,b));
    printf("square result : %i\n", square(a));
    printf("get_max result : %i\n", get_max(a,b));
    
    return 0;
}

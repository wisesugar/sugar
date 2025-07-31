#include <stdio.h>
#include "hello.h"
int main(int argc, char const *argv[])
{
    print_hello("sugar");
    printf("%d\n",count(3,4));
    printf("乘法的结果是:%d\n", multiply(5, 6));
    return 0;
}

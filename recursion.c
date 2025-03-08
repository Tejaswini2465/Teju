#include<stdio.h>
int add(int num)
{

    if (num<=0)
        return 0;
    else
        return num+add(num-1);
}
int main()
{
    printf("%d", add(5));
}


#include <stdio.h>

void main()
{
    printf("EOF的值:%d",EOF);//以十进制的形式输出EOF的值

    int c;

    while((c=getchar())!=EOF)
    {
        putchar(c);    
    }

}
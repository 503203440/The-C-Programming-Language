#include <stdio.h>

void main()
{
    printf("EOF��ֵ:%d",EOF);//��ʮ���Ƶ���ʽ���EOF��ֵ

    int c;

    while((c=getchar())!=EOF)
    {
        putchar(c);    
    }

}
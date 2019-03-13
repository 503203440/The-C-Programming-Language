#include <stdio.h>

void main()
{
    int c, nl;

    printf("EOF:::::::%d\n",EOF);

    nl=0;
    while((c=getchar())!=EOF)
    {
        printf("本次输入的字符对应的ASCII码：%d\n",c);

        if(c=='\n')
            ++nl;    
    }

    printf("%d\n",nl);
    
}
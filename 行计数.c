#include <stdio.h>

void main()
{
    int c, nl;

    printf("EOF:::::::%d\n",EOF);

    nl=0;
    while((c=getchar())!=EOF)
    {
        printf("����������ַ���Ӧ��ASCII�룺%d\n",c);

        if(c=='\n')
            ++nl;    
    }

    printf("%d\n",nl);
    
}
#include <stdio.h>

void main()
{
    int fahr;
    for(fahr=0;fahr<=300;fahr=fahr+20)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));//%3d��ʾ�������ַ���%6.1��ʾ�Ը�������ӡ��������6���ַ���С���������һλС��
    }

}

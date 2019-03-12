#include <stdio.h>

void main()
{
    int fahr;
    for(fahr=0;fahr<=300;fahr=fahr+20)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));//%3d表示以三个字符宽，%6.1表示以浮点数打印，至少有6个字符宽，小数点后面又一位小数
    }

}

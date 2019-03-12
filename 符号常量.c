#include <stdio.h>

//define申明符号常量，可以是数字也可以是任何字符序列
#define LOWER 0
#define UPPER 300
#define STEP 20

void main()
{
    int fahr;

    for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }

}

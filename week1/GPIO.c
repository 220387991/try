/*创建一个结构体，
包含一个元素GPIO_Speed。
再创建一个枚举类型，包括GPIO_Speed_2MHz，GPIO_Speed_10MHz，GPIO_Speed_50MHz三个元素，
通过一个指针将结构体变量传入GPIO_StructureInit()函数，
函数中对GPIO_Speed赋默认值GPIO_Speed_2MHz。
并在main函数中调用GPIO_StructureInit()函数*/
#include <stdio.h>

enum GPIO_Speed{GPIO_Speed_2MHz,GPIO_Speed_10MHz,GPIO_Speed_50MHz};
struct GPIO
{
    enum GPIO_Speed GPIO_Speed;
};

void GPIO_StructureInit(struct GPIO *i){
    i->GPIO_Speed = GPIO_Speed_2MHz;
}
int main ()
{
    struct GPIO X, *p;
    p = &X;
    GPIO_StructureInit(p);
    printf("GPIO_Speed=%d\n", p->GPIO_Speed);
    return 0;
}

